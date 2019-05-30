////1.最近公共祖先
//
//
//#include <iostream>
//using namespace std;
//
//
//int getLCA(int a, int b) {
//	// write code here
//	while (a != 1 || b != 1)
//	{
//		if (a > b)
//		{
//			a = a / 2;
//			if (a == b)
//				return a;
//		}
//		else
//		{
//			b = b / 2;
//			if (a == b)
//				return a;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	cout << getLCA(8,10);
//	return 0;
//}
//
////求最大连续bit数
//
//
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int _max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int check(int n)
//{
//	if (n == 0)
//		return 0;
//	int Max = 0, m = 0, j = 0, arr[32] = { 0 };
//	if (n < 0)
//	{
//		n = n * (-1);
//		arr[31] = 1;
//	}
//	while (n && j < 31)
//	{
//		arr[j++] = (n & 1);
//		n = n >> 1;
//	}
//	while (m < 32 && n < 32)
//	{
//		while (!arr[m])m++;
//		n = m + 1;
//		if (m > 32 || n > 32)
//			break;
//		while (arr[n])n++;
//		Max = _max(Max, n - m);
//		m = n + 1;
//	}
//	return Max;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//		cout << check(n) << endl;
//	return 0;
//}