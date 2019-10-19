//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//#define MIN_CHECK 0.000001
//
//struct point {
//	int id;
//	double x;
//	double y;
//};
//double GetH(double x1, double y1, double x2, double y2)
//{
//	return sqrt(pow(fabs(x1 - x2), 2) + pow(fabs(y1 - y2), 2));
//}
//int main()
//{
//	int n, w, h, r, r1, n1;
//	double x, y;
//	while (cin >> n >> w >> h >> r)
//	{
//		vector<vector<int>> res;
//		vector<point> v(n);
//		for (auto& e : v)
//			cin >> e.id >> e.x >> e.y;
//		for (int i = 0; i < n1; ++i)
//		{
//			cin >> x >> y >> r1;
//			vector<int> re(1, -1);
//			for (auto e : v)
//			{
//				if (fabs(GetH(x, y, e.x, e.y) - (double)r1) < MIN_CHECK)
//				{
//					if (re[0] == -1)
//						re[0] = e.id;
//					else
//						re.push_back(e.id);
//				}
//			}
//			res.push_back(re);
//		}
//		for (auto e : res)
//		{
//			if (e[0] != -1)
//			{
//				cout << e.size();
//				for (auto q : e)
//					cout << " " << q;
//			}
//			else
//				cout << 0;
//			cout << endl;
//		}
//	}
//	return 0;
//}