////#include <iostream>
////#include <string>
////#include <vector>
////#include <queue>
////using namespace std;
////
////int main()
////{
////	string s;
////	while (getline(cin, s))
////	{
////		vector<string> v(s.size(), "");
////		vector<queue<char>> vq(26);
////		for (size_t i = 0;i < s.size(); ++i)
////		{
////			if (!isupper(s[i]) && !islower(s[i]))
////			{
////				v[i] = s[i];
////			}
////			else
////			{
////				if (isupper(s[i]))
////					vq[s[i] - 'A'].push(s[i]);
////				else
////					vq[s[i] - 'a'].push(s[i]);
////			}
////		}
////		size_t i, j = 0;
////		for (i = 0;i < s.size();)
////		{
////			while (i < s.size() && v[i] != "") ++i;
////			while (j < 26 && vq[j].empty())j++;
////			if (j >= 26)
////				continue;
////			v[i] = vq[j].front();
////			vq[j].pop();
////		}
////		for (auto e : v)
////			cout << e;
////		cout << endl;
////	}
////	return 0;
////}
////
////
////#include <iostream>
////using namespace std;
////
////uint64_t ReverseBit(uint64_t num)
////{
////	uint64_t ret = 0;
////	//uint64_t tmp = 1;
////
////	int count = 63;
////	while (count--)
////	{
////		ret |= (num & 1);
////		num <<= 1;
////		ret <<= 1;
////	}
////	return ret;
////}
////
////int main()
////{
////	//cout << ReverseBit(1);
////
////	return 0;
////}
//
//
//
////#include <iostream>
////#include <vector>
////#include <algorithm>
////using namespace std;
////
////typedef struct Box {
////	int o = 0, j = 0;
////}Box;
////
////typedef struct Key {
////	int o = 0, j = 0;
////}Key;
////
////int main()
////{
////	int n, m;
////	while (cin >> n >> m)
////	{
////		Box box;
////		Key key;
////		int tmp;
////		for (int i = 0; i < n; ++i)
////		{
////			cin >> tmp;
////			if (tmp & 1)
////				++box.j;
////			else
////				++box.o;
////		}
////		for (int i = 0; i < m; ++i)
////		{
////			cin >> tmp;
////			if (tmp & 1)
////				++key.j;
////			else
////				++key.o;
////		}
////		cout << min(box.j, key.o) + min(box.o, key.j) << endl;
////	}
////	return 0;
////}
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Info {
//	int id,a, b;
//};
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		Info info;
//		int sum = 99999;
//		vector<Info> v;
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> info.a >> info.b;
//			info.id = i;
//			v.push_back(info);
//		}
//		//sort(v.begin(), v.end(), [](Info& m, Info& n) {return m.a > n.a; });
//		int i = 0;
//		do
//		{
//			int tmp = 0;
//			for (auto &e : v)
//			{
//				tmp += (e.a * e.id + e.b * (n - e.id - 1));
//				e.id = (e.id + 1) % n;
//			}
//			sum = min(sum, tmp);
//			++i;
//		} while (i % n != 0);
//		cout << sum << endl;
//	}
//	return 0;
//}