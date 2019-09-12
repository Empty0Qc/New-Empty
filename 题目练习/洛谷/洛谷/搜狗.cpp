////#include <iostream>
////#include <map>
////#include <vector>
////#include <queue>
////#include <unordered_map>
////using namespace std;
////queue<string> q;
////unordered_map<string, unsigned int> mp;
////class Solution {
////	
////public:
////	Solution()
////	{}
////	int GetSize()
////	{
////		return _size;
////	}
////	void AddSize()
////	{
////		++_size;
////	}
////	void Earse()
////	{
////		--_size;
////	}
////private:
////	int _size;
////	map<string, unsigned int> _mp;
////};
////
////int main()
////{
////	int n;
////	cin >> n;
////	Solution sol();
////	string key;
////	unsigned int val;
////	while (cin >> key >> val)
////	{
////		if (q.size() == n)
////		{
////			//删除第一个元素并打印它
////			auto it = q.front();
////			mp[it] = -1;
////			q.pop();
////		}
////		else
////		{
////
////		}
////	}
////	return 0;
////}
////#include <iostream>
////#include <unordered_map>
////#define u_map unordered_map<int,int>
////using namespace std;
////int _max = -1,k;
////void dfs(u_map mp, int pos)
////{
////	int sum = 0;
////	u_map tmp = mp;
////	for (auto &e : tmp)
////	{
////		while (sum < k && e.second)
////		{
////			sum += e.first;
////		}
////		if (sum >= k)
////		{
////
////		}
////	}
////}
////int main()
////{
////	int n, x, y;
////	while (cin >> n >> k)
////	{
////		//_max = -1;
////		//u_map mp;
////		//for (int i = 0; i < n; ++i)
////		//{
////		//	cin >> x >> y;
////		//	mp[x] = y;
////		//}
////		//dfs(mp, 0);
////	}
////	return 0;
////}
//
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <map>
//#include <set>
//#include <algorithm>
//#define Map map<int,int>
//using namespace std;
//Map mp;
//int main()
//{
//	mp[1] = 2;
//	mp[2] = 5;
//	mp[3] = 5;
//	mp[4] = 4;
//	mp[5] = 5;
//	mp[6] = 6;
//	mp[7] = 3;
//	mp[8] = 7;
//	mp[9] = 6;
//	vector<int> v;
//	int n, m, tmp;
//	while (cin >> n >> m)
//	{
//		int sum = 0;
//		unordered_map<int, int> _map;
//		for (int i = 0; i < m; ++i)
//		{
//			cin >> tmp;
//			_map[tmp] = 1;
//			v.push_back(tmp);
//		}
//	sort(v.begin(), v.end(), [](int i, int j) {return mp[i] == mp[j] ? i > j : mp[i] <mp[j]; });
//	for (auto e : v)
//	{
//		while (n >= mp[e])
//		{
//			sum = sum * 10 + e;
//			n -= mp[e];
//		}
//	}
//	cout << sum <<	endl;
//	}
//	return 0;
//}