//https://www.luogu.org/problemnew/show/P1036
#include <iostream>
using namespace std;
int n, k;
int a[25];
bool vis[25];
long long ans = 0;
bool isprime(int sum)
{
	for (int i = 2; i*i <= sum; i++)
	if (sum%i == 0)
		return false;
	return true;
}
void dfs(int m, int sum, int startx)
{
	if (m == k)
	{
		if (isprime(sum))
			ans++;
		return;
	}
	for (int i = startx; i<n; i++)
	{
		if (vis[i])
			continue;
		vis[i] = true;
		dfs(m + 1, sum + a[i], i + 1);
		vis[i] = false;
	}
	return;
}
int main()
{
	while (cin >> n >> k)
	{
		ans = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		dfs(0, 0, 0);
		cout << ans << endl;
	}
	return 0;
}