//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct Info {
//	string id;
//	int grad;
//	int cid;
//	int apos;
//	int bpos;
//};
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int cnt = 1;
//		vector<Info> v;
//		while (n--)
//		{
//			int t;
//			cin >> t;
//			vector<Info> tmp(t);
//			for (auto& e : tmp)
//			{
//				cin >> e.id >> e.grad;
//				e.cid = cnt;
//			}
//			sort(tmp.begin(), tmp.end(), [](const Info& a, const Info& b) { return a.grad > b.grad; });
//			int xx = 1;
//			int ttt = -1;
//			int tx = 1;
//			for (int i = 0;i < tmp.size();++i)
//			{
//				if (tmp[i].grad != ttt)
//				{
//					ttt = tmp[i].grad;
//					tmp[i].bpos = xx;
//					tx = xx;
//				}
//				else
//					tmp[i].bpos = tx;
//				++xx;
//			}
//			cnt++;
//			v.insert(v.end(), tmp.begin(), tmp.end());
//		}
//		sort(v.begin(), v.end(), [](const Info& a, const Info& b) { return a.grad > b.grad; });
//		int xx = 1;
//		int ttt = -1;
//		for (int i = 0; i < v.size(); ++i)
//		{
//			if (v[i].grad != ttt)
//			{
//				ttt = v[i].grad;
//				v[i].apos = xx;
//				++xx;
//			}
//			else
//				v[i].apos = xx;
//		}
//		xx = 1;
//		int tx = 1;
//		int tp = -1;
//		for (auto e : v)
//		{
//			if (tp != e.grad)
//			{
//				tp = e.grad;
//				cout << e.id << " "<< xx << " " << e.cid << " " << e.bpos << " " << endl;
//				tx = xx;
//			}
//			else
//			{
//				cout << e.id << " " << tx << " " << e.cid << " " << e.bpos << " " << endl;
//			}
//			++xx;
//		}
//	}
//	return 0;
//}