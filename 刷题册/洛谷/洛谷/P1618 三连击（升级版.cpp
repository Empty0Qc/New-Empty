////https://www.luogu.org/problemnew/show/P1618
//#include <iostream>
//#include <cstring>
//using namespace std;
//int a, b, c;
//bool flag[10],flag1;
//bool pcheck(int n)
//{
//	while (n)
//	{
//		if (flag[n % 10])
//		{
//			if (n % 10 == 0)
//				return false;
//			flag[n % 10] = false;
//		}
//		else
//			return false;
//		n /= 10;
//	}
//	return true;
//}
//bool ccheck()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		if (flag[i])
//			return false;
//	}
//	return true;
//}
//void check(int i, int j, int k)
//{
//	memset(flag, true, sizeof(flag));
//	flag[i] = flag[j] = flag[k] = false;
//	int num1 = i * 100 + j * 10 + k;
//	int num2 = (int)(num1 * b / a);
//	int num3 = (int)(num1 * c / a);
//	if (pcheck(num2) && pcheck(num3) && ccheck())
//	{
//		cout << num1 << " " << num2 << " " << num3 << endl;
//		flag1 = false;
//	}
//		
//}
//int main()
//{
//	while (cin >> a >> b >> c)
//	{
//		flag1 = true;
//		if (a&&b&&c)
//		{
//			for (int i = 1; i <= 3; i++)
//			{
//				for (int j = 1; j <= 9; j++)
//				{
//					for (int k = 1; k <= 9; k++)
//					{
//						if (i != j&& i != k && j != k)
//							check(i, j, k);
//					}
//				}
//			}
//		}
//		if (flag1)
//			cout << "No!!!" << endl;
//	}
//	return 0;
//}