#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int f(int n)
{
}

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> v(1,0);
		for (int i = 1; i < 10; ++i)
			v.push_back(i);
		for (int i = 1; i < 10; ++i)
		{
			int count = 0;
			do
			{
				int x = 0;
				for (int j = 1; j < 10; j++)
				{
					if (j == v[j])
						++x;
				}
				if (x == i)
					++count;
			} while (next_permutation(v.begin(), v.end()));
			cout << i << ":" << count << endl;
		}
	}
	return 0;
}