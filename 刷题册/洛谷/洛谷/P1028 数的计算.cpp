////
//
////
////#include <iostream>
////using namespace std;
////
////int main()
////{
////	int n;
////	while (cin >> n)
////	{
////		unsigned long long a[9999] = { 0 };
////		a[0] = a[1] = 1;
////		for (int i = 2; i <= n; i++)
////		{
////			if (i % 2 == 0)
////				a[i] = a[i - 1] + a[i / 2];
////			else
////				a[i] = a[i - 1];
////		}
////		cout << a[n];
////	}
////	return 0;
////}
//#include <cstdio>
//#include <iostream>
//using namespace std;
//int N, Ans[1005], Sum[1005];
//int main()
//{
//	cin >> N;
//	for (register int i = 1; i <= N; i++)
//		Sum[i] = Sum[i - 1] + (Ans[i] = Sum[i >> 1] + 1); // 更新答案并且计入前缀和
//	cout <<  Ans[N] << endl;
//	return 0;
//}