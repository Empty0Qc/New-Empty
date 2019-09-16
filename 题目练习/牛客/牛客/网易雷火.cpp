//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//#define MIN_CHECK 0.001
//struct Sol {
//	Sol(double a, double b)
//	{
//		W = a;
//		H = b;
//		pos = min((W / H), (H / W));
//		Res = W * H;
//	}
//	double W;
//	double H;
//	double pos;
//	double Res;
//};
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<Sol> v;
//		double a, b;
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> a >> b;
//			v.push_back(Sol(a, b));
//		}
//		sort(v.begin(), v.end(), [](Sol a, Sol b) { if (abs(a.Res - b.Res) > MIN_CHECK) return a.Res < b.Res; else {
//			if (abs(a.pos - b.pos) > MIN_CHECK) return a.pos > b.pos; else return a.W < b.W;
//		}});
//		for (auto e : v)
//			cout << e.W << " " << e.H << " ";
//		cout << endl;
//	}
//	return 0;
//}

//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct task{
//	int deadline;
//	int cost;
//};
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<task> v(n);
//		vector<int> vv(n);
//		for (int i = 0; i < n; ++i)
//			vv[i] = i;
//		for (auto& e : v)
//			cin >> e.deadline >> e.cost;
//		int _min = 9999;
//		//sort(v.begin(), v.end(), [](task a, task b) { if (a.deadline == b.deadline) return a.cost < b.cost; else return a.deadline < b.deadline; });
//		do {
//			int t = 0, tn = 0;
//			bool flag = true;
//			for (int i = 0;flag && i < n;++i)
//			{
//				int pos = v[vv[i]].deadline - (tn + v[vv[i]].cost);
//				if (pos >= 0)
//					tn += v[vv[i]].cost;
//				else
//				{
//					tn += v[vv[i]].cost;
//					t -= pos;
//					if (t > _min)
//						flag = false;
//				}
//			}
//			_min = _min < t ? _min : t;
//		} while (next_permutation(vv.begin(), vv.end()));
//		
//		cout << _min << endl;
//	}
//	return 0;
//}

//
//#include <iostream>
//#include <vector>
//#include <iomanip>
//using namespace std;
//#define ull unsigned long long
//bool IsCoprime(ull a, ull b)
//{
//	if (a == 1 || b == 1)
//		return true;
//	else {
//		ull tmp = 0;
//		while (1)
//		{
//			tmp = a % b;
//			if (tmp == 0)
//				break;
//			else
//			{
//				a = b;
//				b = tmp;
//			}
//		}
//		return b == 1;
//	}
//}
//double F(ull n)
//{
//	double cot = 0;
//	for (ull i = 1; i <= n; ++i)
//	{
//		IsCoprime(i, n) ? ++cot : 1;
//	}
//	return (cot / (double)n);
//}
//int main()
//{
//	ull n;
//	while (cin >> n)
//	{
//		vector<double> v(n + 1, 1.000000);
//		double _min = 1.000000;
//		for (size_t i = 2; i <= n; ++i)
//		{
//			v[i] = F(i);
//			_min = v[i] < _min ? v[i] : _min;
//		}
//		cout << setiosflags(ios::fixed) << setprecision(6) << _min << endl;
//	}
//	return 0;
//}