//#include <stdio.h>
//#include <string.h>
//#include <iostream>
//using namespace std;
//long long s[66], h[66];
//int main()
//{
//	int n, m, i;
//	s[1] = 0, s[2] = 1, s[3] = 2;
//	for (i = 4; i <= 66; i++)
//	{
//		s[i] = (i - 1) * (s[i - 1] + s[i - 2]);///错排公式
//	}
//	h[0] = 1;
//	for (i = 1; i <= 20; i++)
//	{
//		h[i] = i * h[i - 1];///求阶乘
//	}
//	while (1)
//	{
//		cin >> n;
//		m = n - 1;
//		printf("%lld\n", (h[n] / (h[n - m] * h[m]) * s[m]));///n个数中m个数错排
//	}
//	return 0;
//}
