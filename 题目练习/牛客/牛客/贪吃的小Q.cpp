#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		int e = m - n;
		vector<int> v(n,0);
		for (int i = 0; i < n; i++)
			v.push_back(1);
		while (e > 0)
		{
			e--;
			v[0]++;
			for (int i = 0; e >= 0 && i < n - 1; i++)
			{
				if ((v[i] + 1) / 2 <= v[i + 1])
					break;
				else
				{
					e--;
					v[i + 1]++;
				}
			}
			if (e < 0)
				v[0]--;
		}
		cout << v[0] << endl;
	}
	return 0;
}