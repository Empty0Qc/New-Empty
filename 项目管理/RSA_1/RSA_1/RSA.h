#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <boost\multiprecision\cpp_int.hpp>
#include <boost\multiprecision\random.hpp>
#include <boost\multiprecision\miller_rabin.hpp>
#include <windows.h>
namespace bm = boost::multiprecision;
namespace rd = boost::random;
typedef bm::int1024_t type_var;
using namespace std;
#define DIFF 12  //秘钥大小

//#define type_var long long


struct Key
{
	//公钥(ekey,pkey)
	type_var pkey;
	type_var ekey;
	//私钥(dkey,pkey)
	type_var dkey;
};

class RSA
{
public:
	RSA();
	Key getKey()
	{
		return _key;
	}
	void ecrept(const char* plain_file_in, const char* ecrept_file_out, type_var ekey, type_var pkey);
	void decrept(const char* ecrept_file_out,const char* decrept_file_in , type_var dkey, type_var pkey);

	std::vector<type_var> ecrept(std::string& str_in, type_var ekey, type_var pkey);
	std::string decrept(std::vector<type_var>& ecrept_str, type_var dkey, type_var pkey);

	void printInfo(std::vector<type_var>& ecrept_str);
	void RSA::display();
private:
	//加密单个信息
	type_var ecrept(type_var msg, type_var key, type_var pkey);
	type_var produce_prime();
	bool is_prime(const type_var prime);
	void produce_keys();
	type_var produce_pkey(type_var prime1, type_var prime2);
	type_var produce_orla(type_var prime1, type_var prime2);
	type_var produce_ekey(type_var orla);
	type_var produce_gcd(type_var ekey, type_var orla);
	type_var produce_dkey(type_var ekey, type_var orla);
	type_var exgcd(type_var ekey, type_var orla, type_var &x, type_var &y);
	
private:
	Key _key;
};
