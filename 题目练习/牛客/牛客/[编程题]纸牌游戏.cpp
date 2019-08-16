//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int sum = 0, f = 1;
//		vector<int> v;
//		v.resize(n);
//		for (auto &e : v)cin >> e;
//		sort(v.begin(), v.end(), [](const int a, const int b)->bool {return a > b;});
//		for (auto e : v)
//		{
//			sum += (f * e);
//			f *= -1;
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}