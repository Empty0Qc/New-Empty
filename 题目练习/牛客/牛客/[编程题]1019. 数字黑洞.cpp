////https://www.nowcoder.com/questionTerminal/2e6a898974064e72ba09d05a60349c9e
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//
//int main()
//{
//	int N;
//	while (cin >> N)
//	{
//		int arr[4];
//		int t = N;
//		for (auto &e : arr) e = t%10,t /= 10;
//		sort(arr, arr + 4);
//		if (arr[0] != arr[3])
//		{
//			do 
//			{
//				int a = 0, b = 0;				
//				for (int i = 3; i >= 0; i--)b = b * 10 + arr[i];
//				for (auto e : arr)a = a * 10 + e;
//				int c = b - a;
//				printf("%04d - %04d = %04d\n",b,a,c);
//				N = c;
//				for (auto &e : arr) e = N % 10, N /= 10;
//				sort(arr, arr + 4);
//				N = c;
//			} while (N != 6174);
//		}
//		else
//			printf("%04d - %04d = 0000\n", N, N);
//	}
//	return 0;
//}