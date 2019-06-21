////https://www.nowcoder.com/questionTerminal/28c1dc06bc9b4afd957b01acdf046e69
//
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int Movfun[1024][1024];
//size_t dfs(string &s1, string &s2)
//{
//	size_t l = s1.size();
//	for (size_t i = 0; i <= l; i++)
//		Movfun[i][0] = Movfun[0][i] = 0;
//	for (size_t i = 1; i <= l; i++)
//	{
//		for (size_t j = 1; j <= l; j++)
//		{
//			if (s1[i - 1] == s2[j - 1])
//				Movfun[i][j] = Movfun[i - 1][j - 1] + 1;
//			else
//				Movfun[i][j] = max(Movfun[i - 1][j], Movfun[i][j - 1]);
//		}
//	}
//	return Movfun[l][l];
//}
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		string tmp = s;
//		reverse(tmp.begin(), tmp.end());
//		if (s.size() == 1 || s == tmp)
//			cout << 0 << endl;
//		else
//			cout << s.size() - dfs(s,tmp) << endl;
//	}
//	return 0;
//}
//
//
//
//
//
//
//
////普通方法，时间复杂度过高
////#include <iostream>
////#include <string>
////#include <cstring>
////using namespace std;
////
////size_t lo,dd,hd;
////string s;
////bool flag;
////bool check(string s)
////{
////	for (size_t i = 0; i < s.size()/2 + 1; i++)
////	{
////		if (s[i] != s[s.size() - 1 - i])
////			return false;
////	}
////	return true;
////}
////void fun(size_t j)
////{
////	string ns = "";
////	ns += s.substr(0, j);
////	ns += s.substr(j + 1, s.size() - j - 1);
////	s = ns;
////}
////void ffun(size_t j,char tmp)
////{
////	string ns = "";
////	ns += s.substr(0, j);
////	ns += tmp;
////	ns += s.substr(j, s.size() - j);
////	s = ns;
////}
////void dfs()
////{
////	if (dd == hd)
////	{
////		if (check(s))
////		{
////			flag = false;
////			lo = dd;
////		}
////	}
////	else
////	{
////		for (size_t i = 0; flag && i < s.size(); i++)
////		{
////			char tmp = s[i];
////			fun(i);
////			hd++;
////			dfs();
////			hd--;
////			ffun(i, tmp);
////		}
////		if (0 == hd && flag)
////		{
////			dd++;
////			dfs();
////		}
////			
////	}	
////	
////}
////int main()
////{
////
////	while (cin >> s)
////	{
////		flag = true;
////		dd = 1;
////		hd = 0;
////		lo = s.size();
////		if (check(s))
////			cout << 0 << endl;
////		else
////		{
////			dfs();
////		}
////		if (flag == false)
////			cout << lo << endl;
////	}
////	return 0;
////}
////
////
////
