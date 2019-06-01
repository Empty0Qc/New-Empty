////https://www.luogu.org/problemnew/show/P1567
//
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int tmp, prev, Max = 0, count = 1;;
//		cin >> prev;
//		while (n-- > 1 && cin >> tmp)
//		{
//			if (tmp >= prev)
//			{
//				count++;
//				prev = tmp;
//				Max = Max > count?Max:count;
//			}
//			else
//			{
//				count = 1;
//				prev = tmp;
//			}
//		}
//		cout << Max << endl;
//	}
//	return 0;
//}