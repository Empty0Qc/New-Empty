//// write your code here cpp
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int book[1024][1024];
//int main()
//{
//	string m;
//	string n;
//	while (cin >> m >> n)
//	{
//		for (size_t i = 1;i <= m.size();i++) {
//			for (size_t j = 1;j <= n.size();j++) {
//				if (m[i - 1] == n[j - 1])
//					book[i][j] = book[i - 1][j - 1] + 1;
//				else
//					book[i][j] = max(book[i - 1][j], book[i][j - 1]);
//			}
//		}
//		cout << book[m.size()][n.size()] << endl;
//	}
//	return 0;
//}