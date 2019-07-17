//// write your code here cpp
//
//#include <iostream>
//#include <string>
//#include <unordered_map>
//using namespace std;
//
//int main()
//{
//	string a, b;
//	while (cin >> a >> b)
//	{
//		unordered_map<char, int> ma, mb;
//		bool flag = true;
//		for (auto e : a)
//			ma[e]++;
//		for (auto e : b)
//			mb[e]++;
//		for (auto e : mb)
//		{
//			if (ma[e.first] == 0 || ma[e.first] < e.second)
//			{
//				flag = false;
//				break;
//			}
//		}
//		cout << (flag ? "Yes" : "No") << endl;
//	}
//	return 0;
//}