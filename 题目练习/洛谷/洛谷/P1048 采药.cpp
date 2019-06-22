////https://www.luogu.org/problemnew/show/P1048
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int t, m;//时间和药品种类
//int dp[1050];
//int w[105], p[105];
//int main()
//{
//	cin >> t >> m;
//	for (int i = 1; i <= m; i++)
//		cin >> w[i] >> p[i];
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = t; j >= 0; j--)
//		{
//			if (j >= w[i])
//				dp[j] = max(p[i] + dp[j - w[i]], dp[j]);
//		}
//	}
//	cout << dp[t] << endl;
//	return 0;
//}
////int w[105], val[105];
////int dp[1005];
////int main()
////{
////	int t, m/*, res = -1*/;
////	scanf("%d%d", &t, &m);
////	for (int i = 1; i <= m; i++)
////	{
////		scanf("%d%d", &w[i], &val[i]);
////	}
////	for (int i = 1; i <= m; i++)
////	{
////		for (int j = t; j >= 0; j--)
////		{
////			if (j >= w[i])
////			{
////				dp[j] = max(dp[j - w[i]] + val[i], dp[j]);
////			}
////		}
////	}
////	printf("%d", dp[t]);
////	return 0;
////}
