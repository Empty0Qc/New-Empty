//#include <iostream>
//using namespace std;
//int used[10240];
//int book[10240]; 
//int n;
//void dfs(int index)
//{
//	if (index == n + 1)
//	{
//		for (int i = 1; i <= n; i++)
//			cout << book[i] << " ";
//		cout << endl;
//		return;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (used[i] == 0)
//		{
//			book[index] = i;
//			used[i] = 1;
//			dfs(index + 1);
//			used[i] = 0;
//		}
//	}
//}
//int main()
//{
//	while (cin >> n) dfs(1);
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//
//	while (cin >> n)
//	{
//		vector<int> v;
//		for (int i = 1; i <= n; i++)
//		{
//			v.push_back(i);
//		}
//		do
//		{
//			for (auto e : v)
//				cout << e << " ";
//			cout << endl;
//		} while (next_permutation(v.begin(), v.end()));
//	}
//	return 0;
//}