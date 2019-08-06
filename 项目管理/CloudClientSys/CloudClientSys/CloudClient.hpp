#ifndef __M_CLOUD_H__
#define __M_CLOUD_H__
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <thread>
#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>
#include <unordered_map>
#include "httplib.h"


#define CLIENT_BACKUP_DIR "backup"
#define CLIENT_BACKUP_INFO_FILE "back.list"

#define SERVER_IP "116.62.111.92"
//#define SERVER_IP "49.234.188.82"
#define SERVER_PORT 9000
#define BACKUP_URL "/list/"
#define RANGE_MAX_SIZE (10 << 20)
// 10 << 20 == 10M

namespace bf = boost::filesystem;

class ThrBackUp{
private:
	std::string _file;
	int64_t _range_start;
	int64_t _range_len;
public:
	bool _res;
public:
	ThrBackUp(){}
	ThrBackUp(const std::string &file, int64_t start, int64_t len)
		:_res(true)
		,_file(file)
		,_range_start(start)
		,_range_len(len)
	{ }
	void Start(){
		std::cout << "into Startthread" << std::endl;
		//获取文件的range分块的数据
		std::ifstream path(_file, std::ios::binary);
		if (!path.is_open()){
			std::cerr << "range backup file " << _file << " failed\n";
			_res = false;
			return;
		}
		//跳转到range的起始位置
		path.seekg(_range_start, std::ios::beg);
		std::string body;
		body.resize(_range_len);
		//读取文件中的range分块的文件数据
		path.read(&body[0], _range_len);
		if (!path.good()){
			std::cerr << "read file " << _file << "range data failed\n";
			_res = false;
			return;
		}
		std::cerr << "read over!" << std::endl;
		path.close();

		//上传range数据
		bf::path name(_file);
		//组织上传的url路径 method url version
		//PUT /list/filename HTTP/1.1
		std::string url = BACKUP_URL + name.filename().string();
		//实例化一个httplib的客户端对象
		httplib::Client cli(SERVER_IP, SERVER_PORT);
		//定义http请求头信息
		httplib::Headers hdr;
		hdr.insert(std::make_pair("Content-Length", std::to_string(_range_len)));
		std::stringstream stmp;
		stmp << "bytes=" << _range_start << "-" << (_range_start + _range_len - 1);
		hdr.insert(std::make_pair("Range", stmp.str().c_str()));
		//通过实例化的Client向服务端发送PUT请求
		auto rsp = cli.Put(url.c_str(), hdr, body, "application/octet-stream");//text/plain
		if (rsp && rsp->status == 200){
			_res = true;
		}
		else {
			_res = false;
		}
		std::stringstream ss;
		ss << "backup file [" << _file << "] range:[ " << _range_start << "-" << _range_len << "] backup success\n";
		std::cout << ss.str();
		return;
	}
};
class CloudClient{
private:
	std::unordered_map<std::string, std::string> _backup_list;
private:
	bool GetBackupInfo(){
		std::cout << "into GetBackupInfo" << std::endl;
		bf::path path(CLIENT_BACKUP_INFO_FILE);
		if (!bf::exists(path)){
			std::cerr << "list file " << path.string() << " is not exist\n";
			return false;
		}
		int64_t fsize = bf::file_size(path);
		//文件为空
		if (fsize == 0){
			std::cerr << "Backup Info error :: No Massage\n";
			return false;
		}
		std::string body;
		body.resize(fsize);
		std::ifstream file(CLIENT_BACKUP_INFO_FILE, std::ios::binary);

		if (!file.is_open()){
			std::cerr << "list file open error\n";
			return false;
		}

		file.read(&body[0], fsize);
		if (!file.good()){
			std::cerr << "read list file body error\n";
			return false;
		}
		file.close();

		std::vector<std::string> list;
		boost::split(list, body, boost::is_any_of("\n"));//字符串切割工具 boost::algorithm::split
		for (auto e : list){
			//filename2 etag
			size_t pos = e.find(" ");
			if (pos == std::string::npos){
				continue;
			}
			std::string key = e.substr(0, pos);
			std::string val = e.substr(pos + 1);
			_backup_list[key] = val;
		}
		return true;
	}
	//将备份信息保存到指定文件中,就是将新的修改的信息保存进文件
	bool SetBackupInfo(){
		std::string body;
		for (auto e : _backup_list){
			body += e.first + " " + e.second + "\n";
		}
		std::ofstream file(CLIENT_BACKUP_INFO_FILE, std::ios::binary);
		if (!file.is_open()){
			std::cerr << "open list file error\n";
			return false;
		}
		file.write(&body[0], body.size());
		if (!file.good()){
			file.close();
			std::cerr << "set backup info error\n";
			return false;
		}
		file.close();
		return true;
	}
	//监控目录下的文件是否需要备份
	bool BackupDirListen(const std::string &path){
		std::cout << "into BackupDirListen" << std::endl;
		bf::directory_iterator item_begin(path);
		bf::directory_iterator item_end;
		for (; item_begin != item_end; ++item_begin){
			if (bf::is_directory(item_begin->status())){
				BackupDirListen(item_begin->path().string());
				continue;
			}
			if (FileIsNeedBackup(item_begin->path().string()) == false){
				continue;
			}
			std::cerr << "file: [" << item_begin->path().string() << "] need to backup\n";
			if (PutFileData(item_begin->path().string()) == false) {
				continue;
			}
			AddBackInfo(item_begin->path().string());
		}
		return true;
	}
	//添加etag信息
	bool AddBackInfo(const std::string &file){
		std::cout << "into AddBackInfo" << std::endl;
		std::string etag;
		if (GetFileEtag(file, etag) == false){
			return false;
		}
		_backup_list[file] = etag;
		return true;
	}
	bool FileIsNeedBackup(const std::string &file){
		std::cout << "into FileIsNeedBackup" << std::endl;
		std::string etag;
		if (GetFileEtag(file, etag) == false){
			return false;
		}
		auto it = _backup_list.find(file);
		if (it != _backup_list.end() && it->second == etag){
			return false;
		}
		return true;
	}
	bool GetFileEtag(const std::string &file, std::string &etag){
		std::cout << "into GetFileEtag" << std::endl;
		bf::path path(file);
		if (!bf::exists(path)){
			std::cerr << "get file " << file << " etag error\n";
			return false;
		}
		int64_t fsize = bf::file_size(path);
		int64_t mtime = bf::last_write_time(path);
		std::stringstream tmp;
		tmp << std::hex << fsize << "-" << std::hex << mtime;
		etag = tmp.str();
		return true;
	}
	

	bool PutFileData(const std::string &file){
		std::cout << "into PutFileData" << std::endl;
		//分块传输大小(10M)对文件内容进行分块传输
		//通过获取分块传输是否成功判断真个文件是否上传成功
		//选择多线程处理
		//1. 获取文件大小
		int64_t fsize = bf::file_size(file);
		if (fsize <= 0){
			std::cerr << "file " << file << "unnecessary backup\n";
			return false;
		}
		//2. 计算总共需要分多少快，得到每块大小以及起始位置
		int count = (int)(fsize / RANGE_MAX_SIZE);
		//3. 循环创建线程，在线程中上传文件数据
		std::vector<ThrBackUp> thr_res;
		std::vector<std::thread> thr_list;
		std::cerr << "file:[" << file << "] fsize:[" << fsize << "] count:[" << count + 1 << "]" << std::endl;
		for (int i = 0; i <= count; i++)
		{
			int64_t range_start = i * RANGE_MAX_SIZE;
			int64_t range_end = (i + 1) * RANGE_MAX_SIZE - 1;
			if (i == count) {
				range_end = fsize - 1;
			}
			int64_t range_len = range_end - range_start + 1;
			ThrBackUp backup_info(file, range_start, range_len);
			thr_res.push_back(backup_info);
		}
		for (int i = 0;i <= count; i++)
		{
			//回调函数
			thr_list.push_back(std::thread(thr_start, &thr_res[i]));
		}
		//4. 等待所有线程退出，判断文件上传结果
		bool ret = true;
		for (size_t i = 0; i <= count; i++){
			thr_list[i].join();
			if (thr_res[i]._res == true){
				continue;
			}
			ret = false;
		}
		//5. 上传成功，则添加文件的备份信息记录
		if (ret == false){
			return false;
		}
		std::cerr << "file:[" << file << "] backup success\n";
		return true;
	}
	static void thr_start(ThrBackUp *backup_info){
		backup_info->Start();
		return;
	}
public:
	CloudClient(){
		bf::path file(CLIENT_BACKUP_DIR);
		if (!bf::exists(file)) {
			bf::create_directory(file);
		}
	}
	bool Start()
	{
		GetBackupInfo();
		while (1)
		{
			BackupDirListen(CLIENT_BACKUP_DIR);
			SetBackupInfo();
			Sleep(5000);
		}
		return true;
	}
};
#endif