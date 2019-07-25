//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//void dfs(string smin, string smax)
//{
//	int lmax = smax.size(), Max = 0;
//	int lmin = smin.size();
//	vector<vector<int>> dp(lmin + 1, vector<int>(lmax + 1, 0));
//	for (int i = 1; i <= lmin; i++)
//	{
//		for (int j = 1; j <= lmax; j++)
//		{
//			if (smin[i - 1] == smax[j - 1])
//			{
//				dp[i][j] = dp[i - 1][j	 - 1] + 1;
//				if (dp[i][j] > Max)
//				{
//					Max = dp[i][j];
//				}
//			}
//		}
//	}
//	cout << Max << endl;
//}
//
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		for (size_t i = 0; i < s1.size(); i++)
//		{
//			if (s1[i] >= 'A' && s1[i] <= 'Z')
//				s1[i] = 'A' + 32;
//		}
//		for (size_t i = 0; i < s2.size(); i++)
//		{
//			if (s2[i] >= 'A' && s2[i] <= 'Z')
//				s2[i] = 'A' + 32;
//		}
//		dfs(s1, s2);
//	}
//	return 0;
//}