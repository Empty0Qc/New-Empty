//#include <iostream>
//#include <vector>
//using namespace std;
//#define mod 1000000007
//int main()
//{
//	int n, a, a1, b, b1;
//	while (cin >> n >> a >> a1 >> b >> b1)
//	{
//		vector<int> v(a1 + 1, a);//浪费掉第一个空间
//		vector<int> tmp(b1, b);
//		vector<int> dp(1024, 0);
//		v.insert(v.end(), tmp.begin(), tmp.end());
//		dp[0] = 1;
//		for (int i = 1;i <= a1 + b1;++i)
//		{
//			for (int j = n;j >= v[i];--j)
//				dp[j] = (dp[j] % mod + dp[j - v[i]] % mod) % mod;
//		}
//		cout << dp[n] << endl;
//	}
//	return 0;
//}