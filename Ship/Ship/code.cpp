//#include<iostream>
//using namespace std;
//long long C(long long n)
//{
//	return (n - 1) * n / 2;
//}
//long long Select(long long arr[], long long d, long long n)
//{
//	if (n < 3)
//		return 0;
//	long long i = 0, j = 2, count = 0;
//	while (j < n)
//	{
//		if (j - i < 2)
//		{
//			j++;
//		}
//		else if (arr[j] - arr[i] > d)
//		{
//			i++;
//		}
//		else if (arr[j] - arr[i] <= d)
//		{
//			count += C(j - i);
//			j++;
//		}
//	}
//	return count;
//}
//
////10 4
////7 8 9 10 15 16 18 20 23 25
////    1 4  4  4  5  6  6  6
//int main()
//{
//	long long n, d, i, j = 0;
//	cin >> n;
//	cin >> d;
//	long long *arr = (long long*)calloc(sizeof(long long), (size_t)n);
//	i = n;
//	while (i)
//	{
//		cin >> arr[j++];
//		i--;
//	}
//	cout << Select(arr, d, n);
//	free(arr);
//	return 0;
//}
//
#include<iostream>
using namespace std;

int main()
{
	int n, m, count = 0,j,i = 0;
	cin >> n >> m;
	int *arr = new int[n];
	while (i < n && cin >> arr[i++]);
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			(arr[i] ^ arr[j]) > m ? count++ : 1;	
		}
	}
	cout << count << endl;
	return 0;
}