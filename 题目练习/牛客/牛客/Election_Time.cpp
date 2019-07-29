//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Cow {
//	int first;
//	int second;
//};
//struct Co {
//	Cow c;
//	int numb;
//};
//bool IsCompare1(const Co &a,const Co &b)
//{
//	return a.c.first > b.c.first;
//}
//bool IsCompare2(const Co &a, const Co &b)
//{
//	return a.c.second > b.c.second;
//}
//int main()
//{
//	int n, k;
//	vector<Co> v;
//	while (cin >> n >> k)
//	{
//		for (int i = 1;i <= n;++i)
//		{
//			Co tmp;
//			tmp.numb = i;
//			cin >> tmp.c.first >> tmp.c.second;
//			v.push_back(tmp);
//		}
//		sort(v.begin(), v.end(), IsCompare1);
//		sort(v.begin(), v.begin() + k, IsCompare2);
//		cout << v[0].numb << endl;
//	}
//	return 0;
//}