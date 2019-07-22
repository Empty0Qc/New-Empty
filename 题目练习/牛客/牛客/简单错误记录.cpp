//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	string s;
//	string n;
//	queue<string> q;
//	unordered_map<string, int> mp;
//	unordered_map<string, bool> bp;
//	while (cin >> s >> n)
//	{
//		string rs;
//		reverse(s.begin(), s.end());
//		if (s.find('\\') != string::npos)
//		{
//			if (s.find('\\') > 16)
//				s = s.substr(0, 16);
//			else
//				s = s.substr(0, s.find('\\'));
//		}
//		reverse(s.begin(), s.end());
//		rs = s + " " + n;
//		mp[rs]++;
//		if (bp[rs] == true)
//				continue;
//		if (q.size() >= 8)
//		{
//			bp[q.front()] = false;
//			q.pop();
//			q.push(rs);
//		}
//		else
//			q.push(rs);
//		bp[rs] = true;
//	}
//	for (size_t i = 0; i < q.size(); i++)
//	{
//		cout << q.front() << " " << mp[q.front()] << endl;
//	} 
//	return 0;
//}

//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//struct ErrMsg{
//	string fname;
//	int num;
//
//	ErrMsg(string fname){
//		this->fname = fname;
//		this->num = 1;
//	}
//
//	bool operator==(const ErrMsg & a){
//		return fname == a.fname;
//	}
//};
//int main()
//{
//	string dirName, lineNum;
//	vector<ErrMsg> v;
//	while (cin >> dirName >> lineNum)
//	{
//		string fileName = dirName.substr(dirName.find_last_of("\\") + 1);
//		if (fileName.size()>16) fileName.erase(fileName.begin(), fileName.end() - 16);
//		fileName = fileName + " " + lineNum;//把文件名和行号连接成一个字符串
//		ErrMsg er(fileName);
//		auto it = find(v.begin(), v.end(), er);
//		if (it == v.end())
//			v.push_back(er);
//		else (*it).num++;
//	}
//	if (v.size() <= 8 && v.size() >= 0)
//	for (auto e : v) cout << e.fname << " " << e.num << endl;
//	else if (v.size()>8)
//	for (auto ite = v.end() - 8; ite<v.end(); ite++) cout << (*ite).fname << " " << (*ite).num << endl;
//	return 0;
//}