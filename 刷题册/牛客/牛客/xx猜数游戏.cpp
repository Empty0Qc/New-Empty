//#include <iostream>
//using namespace std;
//int n,co,num;
//int a[1024000];
//void dfs(int start)
//{
//	if (start == n)
//	{
//		co++;
//	}
//	for (int i = start; i <= n; i++)
//	{
//		int x = i;
//		for (int j = 1; x <= n; x *= j)
//		{
//			if (a[j] == 2)
//				return;
//			else
//				a[j] = 1;
//		}
//		dfs(start + 1);
//		for (int j = 1; x <= n; x *= j)
//		{
//				a[j] = 0;
//		}
//		for (int j = 1; x <= n; x *= j)
//		{
//			if (a[j] == 1)
//				return;
//			else
//				a[j] = 2;
//		}
//		dfs(start + 1);
//		for (int j = 1; x <= n; x *= j)
//		{
//			a[j] = 0;
//		}
//	}
//}
//int main()
//{
//	while (cin >> n)
//	{
//		num = 1;
//		n--;
//		co = 0;
//		dfs(2);
//		cout << co << endl;
//	}
//	return 0;
//}