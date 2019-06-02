////https://www.luogu.org/problemnew/show/P1047
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int sum, n,c = 0;
//	cin >> sum >> n;
//	bool *arr = new bool[sum];
//	for (int i = 0; i <= sum; i++)
//		arr[i] = true;
//	while (n--)
//	{
//		int i, j;
//		cin >> i >> j;
//		for (int x = i; x <= j; x++)
//		{
//			arr[x] = false;
//		}
//	}
//	for (int i = 0; i <= sum; i++)
//	{
//		if (arr[i])
//			c++;
//	}
//	cout << c << endl;
//	return 0;
//}