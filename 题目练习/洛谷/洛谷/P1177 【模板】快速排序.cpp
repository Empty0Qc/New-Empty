//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//int v[1000005];
//void QuickSort(int left,int right)
//{
//	int i = left, j = right, tmp = v[left];
//	if (i < j)
//	{
//		while (i != j)
//		{
//			while (i < j && tmp <= v[j])j--;
//			while (i < j && tmp >= v[i])i++;
//			if (i < j) swap(v[i],v[j]);
//		}
//		QuickSort(left, i - 1);
//		QuickSort(i + 1, right);
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> v[i];
//	QuickSort(0, n - 1);
//	for (int i = 0; i < n; i++)
//		cout << v[i] << " ";
//	return 0;
//}