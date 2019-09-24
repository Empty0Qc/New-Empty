////#include <iostream>
////#include <vector>
////#include <algorithm>
////using namespace std;
////
////int main()
////{
////	int n;
////	while (cin >> n)
////	{
////		vector<vector<int>> v;
////		while (n--)
////		{
////			int m;
////			cin >> m;
////			vector<int> v1(m);
////			for (auto& e : v1)
////				cin >> e;
////			sort(v1.begin(), v1.end());
////			int a = 0,b = 0;
////			if (m % 2 == 1)
////			{
////				for (int i = 0; i < m / 2; ++i)
////				{
////					if (i % 2)
////						a += v1[i] + v1[m - 1 - i];
////					else
////						b += v1[i] + v1[m - 1 - i];
////				}
////				if (a > b)
////					b += v1[m / 2];
////				else
////					a += v1[m / 2];
////			}
////			else
////			{
////				for (int i = 0; i < m / 2; ++i)
////				{
////					if (i % 2)
////						a += v1[i] + v1[m - 1 - i];
////					else
////						b += v1[i] + v1[m - 1 - i];
////				}
////			}
////			if (a > b)
////				v.push_back(vector<int>{b, a});
////			else
////				v.push_back(vector<int>{a, b});
////		}
////		for (auto e : v)
////			cout << e[0] << " " << e[1] << endl;
////	}
////	return 0;
////}
//
//
////
////#include <iostream>
////#include <vector>
////using namespace std;
////
////int main()
////{
////	int n;
////	while (cin >> n)
////	{
////		vector<int> a(n), b(n);
////		int pos = 0;
////		for (auto& e : a) cin >> e;
////		for (auto& e : b) cin >> e;
////		for (auto p : a)
////		{
////			for (auto q : b)
////			{
////				pos ^= (p + q);
////			}
////		}
////		cout << pos << endl;
////	}
////	return 0;
////}
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n, k;
//	while (cin >> n >> k)
//	{
//		vector<int> v(n);
//		for (auto& e : v)
//			cin >> e;
//		sort(v.begin(), v.end());
//		vector<int> res;
//		while (k--)
//		{
//			if (!v.empty() && v[v.size() - 1])
//			{
//				int pos = 0;
//				for (auto& e : v)
//				{
//					if (e != 0)
//					{
//						res.push_back(e);
//						pos = e;
//						break;
//					}
//				}
//				for (auto& e : v)
//				{
//					if (e >= pos)
//					{
//						e -= pos;
//					}
//				}
//				while (!v.empty() && v[0] == 0) 
//					v.erase(v.begin());
//			}
//			else
//				res.push_back(0);
//		}
//		for (auto e : res)
//			cout << e << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//struct Sol
//{
//	string id;
//	string city;
//};
//
//struct City {
//	string city;
//	int pos = 0;
//};
//
//Sol GetSol(string tmp)
//{
//	Sol tm;
//	tm.id = tmp.substr(0, tmp.find('-'));
//	tm.city = tmp.substr(tmp.find('-') + 1);
//	return tm;
//}
//
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		vector<City> v;
//		unordered_map<string, int> mp;
//		unordered_map<string, int> mmp;
//		size_t pos = s.find(' ');
//		while (pos != string::npos)
//		{
//			string t = s.substr(0, pos);
//			if (mp[t] == 0)
//			{
//				++mp[t];
//				Sol tm = GetSol(t);
//				++mmp[tm.city];
//			}
//			s = s.substr(pos + 1);
//			pos = s.find(' ');
//		}
//		if (mp[s] == 0)
//		{
//			++mp[s];
//			Sol tm = GetSol(s);
//			++mmp[tm.city];
//		}
//		for (auto e : mmp)
//		{
//			City c;
//			c.city = e.first;
//			c.pos = e.second;
//			v.push_back(c);
//		}
//		sort(v.begin(), v.end(), [](const City a, const City b) {return a.pos != b.pos ? (a.pos > b.pos) : (a.city < b.city); });
//		for (int i = 0; i < 3; ++i)
//		{
//			cout << v[i].city << " " << v[i].pos << endl;
//		}
//	}
//	return 0;
//}