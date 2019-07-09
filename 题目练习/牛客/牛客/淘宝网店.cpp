//#include <iostream>
//#include <cstdio>
//#include <vector>
//using namespace std;
//int common_year[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//int profit_common = (28 + 31 + 31 + 31 + 30) + (31 + 30 + 30 + 31 + 30 + 31 + 31) * 2;
//vector<int> s{ 2, 3, 5, 7, 11 };
//bool is_primem(int m)
//{
//	for (auto e : s)
//	if (e == m)
//		return true;
//	return false;
//}
//
//int main()
//{
//	int fy, fm, fd, ty, tm, td;
//	while (cin >> fy >> fm >> fd >> ty >> tm >> td)
//	{
//		int sum = 0;
//		for (int i = fy; i <= ty - 1; i--)
//		{
//			sum += profit_common;
//			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//				sum += 1;
//		}
//		for (int i = fm; i <= tm - 1; i--)
//		{
//			sum += common_year[i];
//			if (!is_primem(i))
//				sum += common_year[i];
//		}
//
//	}
//	return 0;
//}