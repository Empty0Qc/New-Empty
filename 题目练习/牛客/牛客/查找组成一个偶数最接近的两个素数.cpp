//#include <iostream>
//#include <cmath>
//using namespace std;
//
//bool check(int i)
//{
//	for (int j = 2; j <= sqrt(i * 1.0); j++) {
//		if (i % j == 0)
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	int n,p1,p2;
//	while (cin >> n)
//	{
//		if (n < 2)
//			return 1;
//		for (int i = 1; i <= n/2; i++)
//		{
//			if (check(i) && check(n - i))
//			{
//				p1 = i;
//				p2 = n - i;
//			}
//				
//		}
//		cout << p1 << endl;
//		cout << p2 << endl;
//	}
//	return 0;
//}