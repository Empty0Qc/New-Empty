//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<int> v;
//void bag(int n,int m,int start)
//{
//	if (m == 0)
//	{
//		for (size_t i = 0; i < v.size(); i++)
//			i ? (cout << " " << v[i]) : (cout << v[i]);
//		cout << endl;
//	}
//	for (int i = start; i <= n && i <= m; i++)
//	{
//		v.push_back(i);
//		bag(n,m - i,i + 1);
//		v.pop_back();
//	}
//}
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)bag(n,m,1);
//	return 0;
//}