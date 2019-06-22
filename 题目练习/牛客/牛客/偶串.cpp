////https://www.nowcoder.com/questionTerminal/6b210792272e4de68d8df8d232076765
//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//bool check(string &s)
//{
//	if (s.size() % 2 != 1)
//	{
//		string t1 = s.substr(0, s.size() / 2);
//		string t2 = s.substr(s.size() / 2, s.size() / 2);
//		if (t1 == t2)
//			return true;
//		else
//			return false;
//	}
//	return false;
//}
//int main()
//{
//	string s;
//	bool f = false;
//	while (cin >> s)
//	{
//		string ns = s.substr(0, s.size() - 1);
//		while (!f && ns.size() >= 2)
//		{
//			if (check(ns))
//			{
//				f = true;
//				break;
//			}
//			ns = ns.substr(0, ns.size() - 1);
//		}
//		if (f)
//			cout << ns.size() << endl;
//	}
//	return 0;
//}