//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		int cnt = 0;
//		vector<int> v; v.push_back(0);
//		for (int i = 0; i < n; i++)
//		{
//			int t; cin >> t;
//			if (t <= m)
//				v.push_back(t);
//		}
//		sort(v.begin(),v.end());
//		n = v.size() - 1;
//		vector<int> dp(n + 1, 0);
//		for (int i = 1; i <= n; i++)
//			dp[i] = v[i];
// 		for (int i = 1; i <= n; i++)
//		{
//			for (int j = i; j <= n; j++)
//			{
//				if (i != j)
//				{
//					dp[j] = v[i] + dp[j];
//					if (dp[j] == m)
//						cnt++;
//				}
//				
//				
//			}
//		}
//		cout << cnt * 2 << endl;
//	}
//	return 0;
//}
