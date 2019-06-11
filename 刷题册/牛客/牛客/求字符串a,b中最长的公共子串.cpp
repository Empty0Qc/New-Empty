////https://www.nowcoder.com/questionTerminal/181a1a71c7574266ad07f9739f791506
//#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <memory.h>
//#include <unordered_map>
//using namespace std;
//
//
//int main()
//{
//	string s1, s2;
//
//	while (cin >> s1 >> s2)
//	{
//		unordered_map<string, int> m;
//		unordered_map<string, int> m1;
//		size_t Max = 0;
//		string co;
//		if (s1.size() > s2.size())
//			swap(s1, s2);
//		for (size_t i = 0; i < s2.size(); i++)
//		{
//			for (size_t j = 1; j <= s2.size() - i; j++)
//			{
//				if (m[s2.substr(i, j)] == 0)
//					m[s2.substr(i, j)]++;
//			}
//		}
//		for (size_t i = 0; i < s1.size(); i++)
//		{
//			for (size_t j = 1; j <= s1.size() - i; j++)
//			{
//				if (m[s1.substr(i, j)] == 0)
//					m.erase(s1.substr(i, j));
//				else if (m[s1.substr(i, j)] == 1)
//				{
//					string tmp = s1.substr(i, j);
//					if (tmp.size() > Max)
//					{
//						Max = tmp.size();
//						co = tmp;
//					}
//				}
//			}
//		}
//		cout << co << endl;
//	}
//	return 0;
//}



////¶¯Ì¬¹æ»®

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//void dfs(string smin, string smax)
//{
//	if (smax.size() < smin.size())
//		swap(smin, smax);
//	int lmax = smax.size(),Max = 0,start = 0;
//	int lmin = smin.size();
//	vector<vector<int>> dp(lmin + 1, vector<int>(lmax + 1,0));
//	for (int i = 1; i <= lmin; i++)
//	{
//		for (int j = 1; j <= lmax; j++)
//		{
//			if (smin[i - 1] == smax[j - 1])
//			{
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//				if (dp[i][j] > Max)
//				{
//					Max = dp[i][j];
//					start = i - Max;
//				}
//			}
//		}
//	}
//	cout << smin.substr(start, Max) << endl;
//}
//
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		dfs(s1, s2);
//	}
//	return 0;
//}
