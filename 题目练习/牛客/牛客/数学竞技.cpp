//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//typedef struct sol
//{
//	int num;
//	int cost;
//}sol;
//int dp[105];
//
//
//int main()
//{
//	int n,time;
//	while (cin >> n)
//	{
//		vector<sol> v(n);
//		for (int i = 0; i < n; ++i)
//			cin >> v[i].num;
//		for (int i = 0; i < n; ++i)
//			cin >> v[i].cost;
//		cin >> time;
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = time; j >= 0; j--)
//			{
//				if (v[i].cost <= j)
//					dp[j] = max(dp[j], dp[j - v[i].cost] + v[i].num);
//			}
//		}
//		cout << dp[time] << endl;
//	}
//}