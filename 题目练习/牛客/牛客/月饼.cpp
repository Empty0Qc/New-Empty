////https://www.nowcoder.com/questionTerminal/6fc9a928c7654b0fbc37d16b8bd29ff9
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct Solution
//{
//	bool operator<(const Solution& m)
//	{
//		return price > m.price;
//	}
//	int t;
//	int s;
//	double price;
//};
//int main()
//{
//	int n, t;
//	while (cin >> n >> t)
//	{
//		double sum = 0;
//		vector<Solution> v;
//		v.resize(n);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> v[i].t;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cin >> v[i].s;
//			v[i].price = (double)v[i].s / (double)v[i].t;
//		}
//		sort(v.begin(), v.end());
//		for (int i = 0; i < n; i++)
//		{
//			if (v[i].t < t)
//			{
//				t -= v[i].t;
//				sum += v[i].s;
//				continue;
//			}
//			sum += t * v[i].price;
//			break;
//		}
//		printf("%.2lf", sum);
//	}
//	return 0;
//}