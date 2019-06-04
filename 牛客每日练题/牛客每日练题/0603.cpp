////计算日期到天数的转换
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int y, m, d;
//	int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	while (cin >> y >> m >> d)
//	{
//		int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//		int Maxdays = 365, days = 0;
//		if (y % 4 == 0 && y % 400 != 0)
//		{
//			Maxdays = 366;
//			arr[2] = 29;
//		}
//		for (int i = 1; i < m; i++)
//			days += arr[i];
//		days += d;
//		if (d <= Maxdays)
//			cout << days << endl;
//		else
//			cout << -1 << endl;
//	}
//	return 0;
//}


#include <iostream>
#include <vector>
#include <set>
using namespace std;
int arr[1001],n;
int comp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}
int dfs(int pos, long long sum, long long pi)
{
	int i, c;
	for (i = pos, c = 0; i< n; ++i){
		sum += arr[i];
		pi *= arr[i];
		if (sum>pi) c += 1 + dfs(i + 1, sum, pi);
		else if (arr[i] == 1) c += dfs(i + 1, sum, pi);
		else break;
		sum -= arr[i];
		pi /= arr[i];
		for (; i < n - 1 && arr[i] == arr[i + 1]; ++i);// duplicate
	}
	return c;
}

int main()
{
	while (cin >> n)
	{
		memset(arr, 0, 1000);
		if (n < 2)
			cout << 0 << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		qsort(arr, n, 4, comp);
		cout << dfs(0, 0, 1) << endl;
	}
	return 0;
}