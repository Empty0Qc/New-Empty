////https://www.luogu.org/problemnew/show/P1008
//#include <iostream>
//using namespace std;
//
//bool check(int a, int b,int c)
//{
//	int arr[10] = { 0 };
//	while (a)
//	{
//		arr[a % 10]++;
//		if (arr[a % 10] > 1)
//			return false;
//		a /= 10;
//	}
//	while (b)
//	{
//		arr[b % 10]++;
//		if (arr[b % 10] > 1)
//			return false;
//		b /= 10;
//	}
//	while (c)
//	{
//		arr[c % 10]++;
//		if (arr[c % 10] > 1)
//			return false;
//		c /= 10;
//	}
//	if (arr[0] == 0)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	for (int i = 192; i < 345; i++)
//	{
//		int i1 = i,i2 = i * 2,i3 = i * 3;
//		if(check(i1, i2,i3))
//			cout << i << " " << i * 2 << " " << i * 3 << endl;
//	}
//	return 0;
//}