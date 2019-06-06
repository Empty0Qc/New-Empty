////https://www.nowcoder.com/questionTerminal/5a0a2c7e431e4fbbbb1ff32ac6e8dfa0
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n, k;
//		cin >> n >> k;
//		vector<int> v(2 * n);
//		for (int i = 0; i < 2 * n; i++)
//			cin >> v[i];
//		while (k--)
//		{
//			vector<int> v1(2 * n);
//			for (int i = 0; i < n; i++)
//			{
//				v1[i * 2] = v[i];
//				v1[i * 2 + 1] = v[n + i];
//			}
//			v = v1;
//		}
//		for (const auto e : v)
//			cout << e << " ";
//		cout << endl;
//	}
//	
//	return 0;
//}