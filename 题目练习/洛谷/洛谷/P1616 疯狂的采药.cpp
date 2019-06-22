////https://www.luogu.org/problemnew/show/P1616
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int T, M;
//int t[10005], p[10005],dp[100005];
//int main()
//{
//	cin >> T >> M;
//	for (int i = 1; i <= M; i++)
//		cin >> t[i] >> p[i];
//	for (int i = 1; i <= M; i++)
//		for (int j = t[i]; j <= T; j++)
//			dp[j] = max(dp[j], dp[j - t[i]] + p[i]);
//	cout << dp[T] << endl;
//	return 0;
//}