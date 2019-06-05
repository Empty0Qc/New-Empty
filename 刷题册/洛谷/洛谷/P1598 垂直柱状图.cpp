////https://www.luogu.org/problemnew/show/P1598
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <map>
//#include <cstdio>
//#include <string>
//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	char s[99] = { 0 };
//	map<char, int> m;
//	int Max = -99, n;
//	for (int i = 0; i < 4; i++)
//	{
//		gets(s);
//		n = strlen(s);
//		for (int j = 0; j < n; j++)
//		{
//			if (s[j] >= 'A' && s[j] <= 'Z')
//				m[s[j]]++;
//		}
//	}
//	for (auto i : m)
//		Max = Max > i.second ? Max : i.second;
//
//	for (int i = Max; i > 0; i--)
//	{
//		for (auto e : m)
//		{
//			if (e.second >= i)
//				cout << "* ";
//			else
//				cout << "  ";
//		}
//		cout << endl;
//	}
//	for (auto i : m)
//		cout << i.first << " ";
//
//	return 0;
//}