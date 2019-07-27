//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//
//struct Cow {
//	int age;
//	Cow(int a)
//	:age(a)
//	{}
//};
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		Cow start(1);
//		vector<Cow> v;
//		int sum = 0;
//		set<int> s;
//		v.push_back(start);
//		for (int i = 2;i <= n;++i) {
//			int tcount = 0;
//			for (size_t j = 0;j < v.size();++j)
//			{
//				++v[j].age;
//				if (v[j].age >= 3 && v[j].age <= 7)
//					tcount++;
//				if (v[j].age > 10)
//					s.emplace(j);
//			}
//			while (tcount--)
//			{
//				v.push_back(start);
//			}
//		}
//		cout << v.size - s.size() << endl;
//	}
//}