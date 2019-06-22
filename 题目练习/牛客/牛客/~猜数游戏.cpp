//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//const int MOD = 1E9 + 7;
//const int MAX = 1e6 + 7;
//
//int dp[MAX];
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		memset(dp, 0, MAX);
//		ll ans = 1;
//		for (int i = 2; i <= n; i++)
//		{
//			int cnt = 0;
//			if (dp[i])
//				continue;
//			for (int j = i + i; j <= n; j += i)
//				dp[j] = 1;
//			ll mi = i;
//			while (mi <= n)
//			{
//				cnt++;
//				mi *= i;
//			}
//			ans = ans * (cnt + 1) % MOD;
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}
//
