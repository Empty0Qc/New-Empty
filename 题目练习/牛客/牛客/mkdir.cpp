//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		set<string> se;
//		vector<string> vs(n);
//		for (int i = 0;i < n;i++) {
//			cin >> vs[i];
//		}
//		sort(vs.begin(), vs.end());
//		for (int i = 0;i < n;i++)
//		{
//			bool flag = true;
//			for (int j = i + 1;flag && j < n;j++)
//			{
//				if (vs[j].find(vs[i]) != string::npos)
//				{
//					flag = false;
//				}
//			}
//			if (flag)
//				se.insert(vs[i]);
//		}
//		for (auto e : se)
//			cout << "mkdir -p " << e << endl;
//		cout << endl;
//	}
//	return 0;
//}
