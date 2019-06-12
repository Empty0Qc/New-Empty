////https://www.luogu.org/problemnew/show/P1478
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Solution
//{
//	//friend bool operator<(const Solution& a, const Solution& b);
//	int height;
//	int cost_s;
//	bool operator<(const Solution& b)
//	{
//		return this->cost_s < b.cost_s;
//	}
//};
//
//int main()
//{
//	int n, s;
//	while (cin >> n >> s)
//	{
//		int a, b,count = 0;
//		Solution obj;
//		vector<Solution> ss;
//		cin >> a >> b;
//		int _max = a + b;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> obj.height >> obj.cost_s;
//			if (obj.height <= _max)
//				ss.push_back(obj);
//		}
//		sort(ss.begin(), ss.end());
//		for (auto e:ss)
//			if (s >= e.cost_s)
//			{
//				s -= e.cost_s;
//				count++;
//			}
//			else
//				break;
//
//			cout << count << endl;
//	}
//	return 0;
//}
