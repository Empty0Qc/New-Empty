//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//
//int main()
//
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v(n);
//		unordered_map<int, int> mp;
//		for (auto& e : v)
//		{
//			cin >> e;
//			mp[e] = 1;
//		}
//		sort(v.begin(), v.end());
//		int pos = v[n - 1] - v[0], _max = 0;
//		for (int j = 1; j <= pos; ++j)
//		{
//			int i = 0;
//			while (i < n)
//			{
//				int cot = v[i],_m = 0;
//				while (i < n && mp[cot] == 1)
//				{
//					++i;
//					cot += j;
//					++_m;
//				}
//				_max = max(_m, _max);
//				if (n - i < _max)
//					i = n;
//			}
//		}
//		cout << _max << endl;
//	}
//	return 0;
//}
