//#include <iostream>
//#include <map>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int n,m;
//	while (cin >> m)
//	{
//		vector<string> vs;
//		while (m--)
//		{
//			cin >> n;
//			bool f = false;
//			map<int, int> mp;
//			while (n != 1)
//			{
//				int tmp = n;
//				++mp[n];
//				int res = 0;
//				while (n)
//				{
//					int t = n % 10;
//					res += t * t;
//					n /= 10;
//				}
//				n = res;
//				if (n != tmp)
//					mp.clear();
//				if (mp[n] > 30000)
//				{
//					f = true;
//					break;
//				}
//			}
//			if (f)
//				vs.push_back("false");
//			else
//				vs.push_back("true");
//		}
//		for (auto e : vs)
//			cout << e << endl;	
//	}
//	return 0;
//}