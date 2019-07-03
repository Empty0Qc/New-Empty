//#include <iostream>
//#include <string>
//#include <math.h>
//#include <vector>
//using namespace std;
//#define P 314 // 整体已×百倍
////大数相除问题 -> 大数相乘问题
//
//int main()
//{
//	string a, b;
//	while (cin >> a >> b)
//	{
//		string s1 = a, s2 = b;
//		vector<int> v;
//		v.resize(a.size() + b.size());
//		reverse(s1.begin(), s1.end());
//		reverse(s2.begin(), s2.end());
//		for (size_t i = 0; i < s1.size(); i++)
//		{
//			for (size_t j = 0; j < s2.size(); j++)
//			{
//				int tmp = (s1[i] - '0') * (s2[j] - '0') + v[i + j];
//				v[i + j] = tmp % 10;
//				v[i + j + 1] = tmp / 10;
//			}
//		}
//		if (v[v.size() - 1] == 0)
//		{
//			for (size_t i = v.size() - 2; i < v.size() && i >= 0; i--)
//				cout << v[i];
//		}
//		else
//		{
//			for (size_t i = v.size() - 1; i < v.size() && i >= 0; i--)
//				cout << v[i];
//		}
//			cout << endl;
//	}
//	return 0;
//}