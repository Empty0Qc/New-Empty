#include <iostream>
#include <math.h>
using namespace std;

int solve(int n, int m)
{
	int* dp = new int[m + 1];
	int* slates = new int[m];
	int num = 0;
	slates[num++] = n;
	for (int k = 0; k<num; k++)
	{
		int  x = slates[k];
		int ns = (int)sqrt(x);
		for (int i = 2; i <= ns; i++)
		{
			if (x%i == 0)
			{
				int y = x + i;
				if (y <= m&&dp[y] == 0)
				{
					dp[y] = dp[x] + 1;
					slates[num++] = y;
				}
				y = x + x / i;
				if (y <= m&&dp[y] == 0)
				{
					dp[y] = dp[x] + 1;
					slates[num++] = y;
				}
			}
		}
	}
	return dp[m] == 0 ? -1 : dp[m];
}

int main()
{
	int N, M;
	while (cin >> N >> M)
	{
		if (N == M)
			cout << 0 << endl;
		else
			cout << solve(N, M) << endl;
	}
	return 0;
}