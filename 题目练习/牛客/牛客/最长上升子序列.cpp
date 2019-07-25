// write your code here cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> v(n + 1);
		vector<int> dp(n + 1,1);
		int _max = 1;
		for (int i = 1;i <= n;++i)
			cin >> v[i];
		for (int i = 1;i < n;++i)
		{
			for (int j = 1; j < i; ++j)
			{
				if (v[j] < v[i])
					dp[i] = max(dp[j] + 1,dp[i]);
			}
		}
		for (auto e : dp)
			_max = max(e, _max);
		cout << _max << endl;
	}
	return 0;
}
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstdlib>
//#include <cstring>
//#include <cmath>
//using namespace std;
//const int maxn = 103, INF = 0x7f7f7f7f;
//int a[maxn], f[maxn];
//int n, ans = -INF;
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//		f[i] = 1;
//	}
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j < i; j++)
//			if (a[j] < a[i])
//				f[i] = max(f[i], f[j] + 1);
//	for (int i = 1; i <= n; i++)
//		ans = max(ans, f[i]);
//	printf("%d\n", ans);
//	return 0;
//}