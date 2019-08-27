////#include <iostream>
////#include <vector>
////#include <string>
////#include <set>
////using namespace std;
////
////int main()
////{
////	string s;
////	vector<string> v;
////	getline(cin, s);
////	while (s.find(' ') != string::npos)
////	{		v.push_back(s.substr(0, s.find(' ')));
////		s = s.substr(s.find(' ') + 1);
////	}
////	string tmp = "";
////	vector<bool> book(26, true);
////	for (auto e : v)
////	{
////		int x = e[0] - 'a';
////		tmp += e[0];
////		book[x] = false;
////		for (size_t i = 1; i < e.size(); ++i)
////		{
////			int y = e[i] - 'a';
////			if (book[y])
////			{
////				book[y] = false;
////			}
////		}
////	}
////	return 0;
////}
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	vector<int> v;
//	while (!s.empty())
//	{
//		char x = s[0];
//		string tmp;
//		int pos = s.find_last_of(x);
//		tmp = s.substr(0, pos);
//		size_t _max = pos;
//		for (auto e : tmp)
//		{
//			_max = max(_max,s.find_last_of(e));
//		}
//		v.push_back(_max + 1);
//		s = s.substr(_max + 1);
//	}
//	for (auto e : v)
//		cout << e << " ";
//	return 0;
//}