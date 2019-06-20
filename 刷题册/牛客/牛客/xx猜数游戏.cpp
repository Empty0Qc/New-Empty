//#include <iostream>
//using namespace std;
//int n,co,num;
//int a[1024000];
//void dfs(int start)
//{
//	if (start == n)
//	{
//		co++;
//	}
//	for (int i = start; i <= n; i++)
//	{
//		int x = i;
//		for (int j = 1; x <= n; x *= j)
//		{
//			if (a[j] == 2)
//				return;
//			else
//				a[j] = 1;
//		}
//		dfs(start + 1);
//		for (int j = 1; x <= n; x *= j)
//		{
//				a[j] = 0;
//		}
//		for (int j = 1; x <= n; x *= j)
//		{
//			if (a[j] == 1)
//				return;
//			else
//				a[j] = 2;
//		}
//		dfs(start + 1);
//		for (int j = 1; x <= n; x *= j)
//		{
//			a[j] = 0;
//		}
//	}
//}
//int main()
//{
//	while (cin >> n)
//	{
//		num = 1;
//		n--;
//		co = 0;
//		dfs(2);
//		cout << co << endl;
//	}
//	return 0;
//}


#include <iostream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

const int MOD = 1E9 + 7;
const int maxn = 1e6 + 5;

int vis[maxn];

int main()
{
	int n;
	while (cin >> n)
	{
		long long ans = 1;

		for (int i = 2; i <= n; i++)
		{
			int cnt = 0;
			if (vis[i])
				continue;
			for (int j = i + i; j <= n; j += i)        //处理他的倍数
			{
				vis[j] = 1;
			}
			//求i的幂次
			long long mi = i;       //用 int 会溢出
			while (mi <= n)
			{
				cnt++;
				mi *= i;
			}

			ans = ans * (cnt + 1) % MOD;
		}
		cout << ans << endl;
	}
}