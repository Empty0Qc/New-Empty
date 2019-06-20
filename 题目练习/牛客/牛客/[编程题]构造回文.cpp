//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//size_t lo,dd,hd;
//string s;
//bool flag;
//bool check(string s)
//{
//	for (size_t i = 0; i < s.size()/2 + 1; i++)
//	{
//		if (s[i] != s[s.size() - 1 - i])
//			return false;
//	}
//	return true;
//}
//void fun(size_t j)
//{
//	string ns = "";
//	ns += s.substr(0, j);
//	ns += s.substr(j + 1, s.size() - j - 1);
//	s = ns;
//}
//void ffun(size_t j,char tmp)
//{
//	string ns = "";
//	ns += s.substr(0, j);
//	ns += tmp;
//	ns += s.substr(j, s.size() - j);
//	s = ns;
//}
//void dfs()
//{
//	if (dd == hd)
//	{
//		if (check(s))
//		{
//			flag = false;
//			lo = dd;
//		}
//	}
//	else
//	{
//		for (size_t i = 0; flag && i < s.size(); i++)
//		{
//			char tmp = s[i];
//			fun(i);
//			hd++;
//			dfs();
//			hd--;
//			ffun(i, tmp);
//		}
//		if (0 == hd && flag)
//		{
//			dd++;
//			dfs();
//		}
//			
//	}	
//	
//}
//int main()
//{
//
//	while (cin >> s)
//	{
//		flag = true;
//		dd = 1;
//		hd = 0;
//		lo = s.size();
//		if (check(s))
//			cout << 0 << endl;
//		else
//		{
//			dfs();
//		}
//		if (flag == false)
//			cout << lo << endl;
//	}
//	return 0;
//}
//
//
//
