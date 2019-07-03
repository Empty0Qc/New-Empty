#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

struct Solution
{
	bool operator<(const Solution& s)
	{
		return price > s.price;
	}
	int t;
	double price;
};
int main()
{
	int n,t;
	while (cin >> n >> t)
	{
		double sum = 0;
		vector<Solution> v;
		v.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i].t;
		}
		for (int i = 0; i < n; i++)
		{
			double tmp;
			cin >> tmp;
			v[i].price = tmp / v[i].t;
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < n; i++)
		{
			if (v[i].t < t)
			{
				t -= v[i].t;
				sum += v[i].t * v[i].price;
				continue;
			}
				sum += t * v[i].price;
				break;
		}
		printf("%.2f", sum);
	}
	return 0;
}