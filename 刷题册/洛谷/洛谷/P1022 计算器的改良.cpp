////https://www.luogu.org/problemnew/show/P1022
//#include <iostream>
//#include <string>
//#include <math.h>
//#include <iomanip>
//#include <algorithm>
//using namespace std;
//char c;//标记一元一次方程的未知变量
//double cnum;//未知数的参数
//double cright;
//void doit(string &s,int flag,double flag1)
//{
//	//处理未知变量
//	if (s.find(c) == string::npos)
//	{
//		if (flag == 0)
//			flag1 *= -1;
//		double t = 0;
//		for (auto e : s)
//			t = t * 10 + (e - '0');
//		cright += flag1 * t;
//	}
//	else
//	{
//		if (flag == 1)
//			flag1 *= -1;
//		double t = 0;
//		if (s.size() == 1)
//			cnum += flag1;
//		else
//		{
//			string tmp = s.substr(0, s.find(c));
//			for (auto e : tmp)
//				t = t * 10 + (e - '0');
//			cnum += flag1 * t;
//		}	
//	}
//}
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		cnum = 0;
//		cright = 0;
//		string left, right, tmp;
//
//		int d = s.find("=");
//		left = s.substr(0, d);
//		if (left[0] != '-')
//		{
//			left = "+" + left;
//		}
//		for (auto e : s)
//		if (e <= 'z'&&e >= 'a')
//		{
//			c = e;
//			break;
//		}
//		right = s.substr(d + 1, s.size());
//		if (right[0] != '-')
//		{
//			right = "+" + right;
//		}
//
//		//处理左 +6a-5+1
//		tmp = left;
//		while (tmp.size())
//		{
//			char f = tmp[0];
//			tmp = tmp.substr(1, tmp.size() - 1);
//			if (tmp.find('+') != string::npos || tmp.find('-') != string::npos)
//			{
//				int next = min(tmp.find('+'), tmp.find('-'));
//				string t = tmp.substr(0, next);
//				if (f == '+')
//					doit(t, 0, 1);
//				else
//					doit(t, 0, -1);
//				tmp = tmp.substr(next, tmp.size() - next);
//			}
//			else
//			{
//				if (f == '+')
//					doit(tmp, 0, 1);
//				else
//					doit(tmp, 0, -1);
//				tmp.clear();
//			}
//		}
//		//处理右边 +2-2a
//		tmp = right;
//		while (tmp.size())
//		{
//			char f = tmp[0];
//			tmp = tmp.substr(1, tmp.size() - 1);
//			if (tmp.find('+') != string::npos || tmp.find('-') != string::npos)
//			{
//				int next = min(tmp.find('+'), tmp.find('-'));
//				string t = tmp.substr(0, next);
//				if (f == '+')
//					doit(t, 1, 1);
//				else
//					doit(t, 1, -1);
//				tmp = tmp.substr(next, tmp.size() - next);
//			}
//			else
//			{
//				if (f == '+')
//					doit(tmp, 1, 1);
//				else
//					doit(tmp, 1, -1);
//				tmp.clear();
//			}
//		}
//		if (!(cright / cnum))
//			printf("%c=0.000\n", c);
//		else
//			printf("%c=%.3lf\n", c, (cright / cnum));
//
//}
//	return 0;
//}