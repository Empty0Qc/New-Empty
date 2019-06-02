////#include <iostream>
////#include <string>
////#include <map>
////using namespace std;
////
////bool check( string d,  string s,int dl,int sl)
////{
////	for (int i = 0; i < dl - 1 - sl; i++)
////	{
////		int k = i,j = 0;
////		while (k < dl && d[k] == s[k])
////		{
////			k++;
////			j++;
////		}
////		if (j == sl)
////			return true;
////	}
////	return false;
////}
////
////int main()
////{
////	string tmp;
////	bool f = true;
////	int i = 0;
////	while (cin >> tmp)
////	{
////		int l = tmp.length();
////		string *s = new string[];
////		while (cin >> s[i])
////		{
////			int len = s[i].length();
////			if (!check(tmp, s[i], l, len))
////			{
////				f = false;
////				break;
////			}
////		}
////		cout << f << endl;
////	}
////	return 0;
////}
//
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//int Max = 1;
//
//int check(int w, int b, int n)
//{
//	int w1 = 0,b1 = 0;
//	if (n == 0)
//	{
//		return 1;
//	}
//	if (w < 0 && b < 0)
//		return 0;
//	if (w > n)
//		w1 =  1 + check(w - n,b,n - 1);
//	if (b > n)
//		b1 = 1 + check(w - n, b, n - 1);
//	return max(w1, b1);
//}
//int main()
//{
//	int w, b;
//	while (cin >> w >> b)
//	{
//		if (w + b < 3)
//			cout << 1 << " " << 2 << endl;
//		if (w + b < 5)
//			cout << 2 << " " << 2 << endl;
//		int count = 1;
//		for (int i = 3; (w + b) >= ((1 + i) / 2 * i); i++)
//		{
//			int tmp;
//			tmp = check(w, b, i);
//			count = tmp != 0 ? tmp : count;
//		}
//		if (Max > 2)
//			cout << Max << " " << count << endl;
//	}
//	return 0;
//}