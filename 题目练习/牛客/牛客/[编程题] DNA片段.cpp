//#include <iostream>
//#include <string>
//#include <set>
//#include <algorithm>
//using namespace std;
//char map[] = { 'A' ,'T' ,'C' ,'G'};
//bool check(char e)
//{
//	for (int i = 0; i < 4; i++)
//	if (map[i] == e)
//		return true;
//	return false;
//}
//int dp[1024];
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		int Max = 0,i = 1;
//		dp[0] = 0;
//		for (auto e : s)
//		{
//			dp[i] = check(e) ? dp[i - 1] + 1 : 0;
//			Max = max(dp[i], Max);
//			i++;
//		}
//		cout << Max << endl;
//	}
//	return 0;
//}