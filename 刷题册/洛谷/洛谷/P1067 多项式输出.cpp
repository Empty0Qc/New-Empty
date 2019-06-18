//https://www.luogu.org/problemnew/show/P1067
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a[268],n;
//	while (cin >> n)
//	{
//		for (int i = 0; i <= n; i++)
//			cin >> a[i];
//		for (int i = 0; i < n; i++)
//		{
//			if (a[i] > 0)
//			{
//				if (i != 0)
//					cout << "+";
//				if (n - i == 1)
//				{
//					if (a[i] == 1)
//						cout << "x";
//					else
//						cout << a[i] << "x";
//				}		
//				else if (a[i] == 1)
//					cout << "x^" << n - i;
//				else
//					cout << a[i] << "x^" << n - i;
//			}
//			else if (a[i] < 0)
//			{
//				if (n - i == 1)
//				{
//					if (a[i] == -1)
//						cout << "-x";
//					else
//						cout << a[i] << "x";
//				}				
//				else if (a[i] == -1)
//					cout << "-x^" << n - i;
//				else
//					cout << a[i] << "x^" << n - i;
//			}
//		}
//		if (a[n]>0)
//			cout << "+";
//		if (a[n] != 0)
//			cout << a[n];
//	}
//	return 0;
//}