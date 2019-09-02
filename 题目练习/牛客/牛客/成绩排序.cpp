//https://www.nowcoder.com/questionTerminal/8e400fd9905747e4acc2aeed7240978b
//
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n,flag;
//	while (cin >> n)
//	{
//		cin >> flag;
//		vector<string> s;//´æÃû×Ö
//		bool f[1024];
//		memset(f, true, n);
//		int a[1024];//´æ³É¼¨
//		for (int i = 0; i < n; i++)
//		{
//			string name;
//			cin >> name >> a[i];
//			while (tc--)
//			{
//				int _min = 999,e;
//				for (size_t i = 0; i < s.size(); i++)
//				{
//					if (a[i] < _min && f[i])
//					{
//						_min = a[i];
//						e = i;
//					}
//				}
//				cout << s[e] << " " << a[e] << endl;
//				f[e] = false;
//			}
//		}
//		else
//		{
//			int tc = n;
//			while (tc--)
//			{
//				int _max = -1, e;
//				for (size_t i = 0; i < s.size(); i++)
//				{
//					if (a[i] > _max && f[i])
//					{
//						_max = a[i];
//						e = i;
//					}
//				}
//				cout << s[e] << " " << a[e] << endl;
//				f[e] = false;
//			}
//		}
//
//	}
//	return 0;
//}

//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//
//struct Info
//{
//	string name;
//	int score;
//	friend bool operator<(const Info &a, const Info &b);
//};
//bool operator<(const Info &a, const Info &b)
//{
//	return a.score < b.score;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		Info info;
//		int flag;
//		cin >> flag;
//		vector<Info> v;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> info.name >> info.score;
//			v.push_back(info);
//		}
//		stable_sort(v.begin(), v.end());
//		if (!flag)
//		{
//			auto &e = v.rbegin();
//			while (e != v.rend())
//			{
//				cout << e->name << " " << e->score << endl;
//				e++;
//			}
//		}
//		else
//		{
//			auto &e = v.begin();
//			while (e != v.end())
//			{
//				cout << e->name << " " << e->score << endl;
//				e++;
//			}
//		}
//	}
// 	return 0;
//}