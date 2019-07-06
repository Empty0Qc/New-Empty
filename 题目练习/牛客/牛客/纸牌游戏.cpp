//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//multiset<int>::reverse_iterator e;
//int main()
//{
//	int n,nn,yy;
//	multiset<int> s;
//	while (cin >> n)
//	{
//		nn = yy = 0;
//		for (int i = 0; i < n; i++)
//		{
//			int tmp; cin >> tmp;
//			s.insert(tmp);
//		}
//		int i = 1;
//		for (e = s.rbegin(); e != s.rend(); e++,++i)
//			(i % 2 == 1) ? nn += *e : yy += *e;
//		cout << nn - yy << endl;
//		s.clear();
//	}
//	return 0;
//}