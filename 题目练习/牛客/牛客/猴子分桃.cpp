//https://www.nowcoder.com/questionTerminal/480d2b484e1f43af8ea8434770811b4a
//////// write your code here cpp
//////#include <iostream>
//////using namespace std;
//////
//////int main()
//////{
//////	int n;
//////	while (cin >> n)
//////	{
//////		if (n == 0)break;
//////		bool flag = true;
//////		for (int j = 1; flag; j += 20)
//////		{
//////			int cnt = 0;
//////			int end = 0;
//////			int tmp = j;
//////			while (tmp % 5 == 1)
//////			{
//////				tmp = (int)((tmp - 1) / 5 * 4);
//////				end = (int)tmp;
//////				cnt++;
//////			}
//////			if (cnt == n)
//////			{
//////				cout << j << " " << end + cnt << endl;
//////				flag = false;
//////			}
//////		}
//////	}
//////	return 0;
//////}
////#include <iostream>
////using namespace std;
////#define ull unsigned long long
////int main()
////{
////	int n;
////	while (cin >> n)
////	{
////		if (n == 0)
////			break;
////		ull a = 1;
////		ull b = 0;
////		for (int i = 2; i <= n; i++)
////			a = a * 5 + 16;
////		ull tmp = a;
////		for (int i = 0; i < n;i++)
////		{
////			tmp = (ull)((tmp - 1) / 5 * 4);
////			b++;
////		}
////		cout << a << " " << b + tmp << endl;
////	}
////	return 0;
////}
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		if (n == 0)break;
//		else cout << (long)pow(5, n) - 4 << " " << (long)pow(4, n) + n - 4 << endl;
//	}
//
//	return 0;
//}