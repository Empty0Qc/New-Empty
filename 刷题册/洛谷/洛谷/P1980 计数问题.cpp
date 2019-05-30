////https://www.luogu.org/problemnew/show/P1980
//#include <iostream>
//using namespace std;
//
//int Kcount(int i, int k)
//{
//	int count = 0;
//	while (i)
//	{
//		if (i % 10 == k)
//			count++;
//		i /= 10;
//	}
//	return count;
//}
//int main()
//{
//	int n, k, count = 0;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		count += Kcount(i, k);
//	}
//	cout << count << endl;
//	return 0;
//}