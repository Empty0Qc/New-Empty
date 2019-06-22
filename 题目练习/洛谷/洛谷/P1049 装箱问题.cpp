////https://www.luogu.org/problemnew/show/P1049
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//int nv[1024];
//int dp[35];
//int main()
//{
//	int V, n;
//	scanf("%d %d",&V,&n);
//	for (int i = 1; i <= n; i++)scanf("%d",&nv[i]);
//	for (int i = 1; i <= n; i++)
//		for (int j = V; j >= nv[i]; j--)
//			dp[j] = max(nv[i] + dp[j - nv[i]], dp[j]);
//	printf("%d\n",V - dp[V]);
//	return 0;
//}