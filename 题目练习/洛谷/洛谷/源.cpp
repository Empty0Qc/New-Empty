//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int _max = -1, _maxid = -1;
//		vector<int> v(n);
//		vector<int> pd(n, -1);
//		for (auto& e : v)
//			cin >> e;
//		for (int i = n - 1; i > 0; --i)
//		{
//			for (int j = i - 1; j >= 0; --j)
//			{
//				if (v[j] > v[i])
//				{
//					if (pd[j] == -1)
//						pd[j] = 0;
//					else
//						++pd[j];
//					if (pd[j] > _max)
//					{
//						_max = pd[j];
//						_maxid = j;
//					}
//					break;
//				}
//			}
//		}
//
//		if (_maxid != -1)
//		{
//			for (int i = 0; i < n; ++i)
//			{
//				if (pd[i] == _max)
//				{
//					cout << v[i] << endl;
//					break;
//				}
//			}
//		}
//			//cout << v[_maxid] << endl;
//		else
//			cout << v[0] << endl;
//	}
//	return 0;
//}
////
////#include <iostream>
////#include <string>
////#include <sstream>
////#include <set>
////#include <algorithm>
////using namespace std;
////int ed;
////set<string> _se;
////int _stoi(string s)
////{
////	int x;
////	stringstream ss;
////	ss << s;
////	ss >> x;
////	return x;
////}
////void dfs(string s, string res,int index)
////{
////	if (index == ed)
////	{
////		int pos = _stoi(s.substr(index,1));
////		res = res + char(64 + pos);
////		_se.insert(res);
////		return;
////	}
////	if (index == ed + 1)
////	{
////		_se.insert(res);
////		return;
////	}
////	if (index < ed)
////	{
////		string tmp = s.substr(index, 1);
////		dfs(s, res + char(_stoi(tmp) + 64), index + 1);
////
////		tmp = s.substr(index, 2);
////		if(_stoi(tmp) <= 26)
////			dfs(s, res + char(_stoi(tmp) + 64), index + 2);
////	}
////	return;
////}
////
////int main()
////{
////	string s;
////	while (cin >> s)
////	{
////		_se.clear();
////		ed = s.size() - 1;
////		dfs(s,"", 0);
////		for (auto e : _se)
////			cout << e << endl;
////	}
////	return 0;
////}