//// write your code here cpp
//#include <iostream>
//#include <vector>
//using namespace std;
//int m, n;
//vector<vector<char>> vr;
//static int sum;
//void dfs(int x, int y)
//{
//	if (x > 0 && y > 0 && x <= m && y <= n && vr[x][y] == '.') {
//		++sum;
//		vr[x][y] = '#';
//		dfs(x - 1, y);
//		dfs(x + 1, y);
//		dfs(x, y + 1);
//		dfs(x, y - 1);
//	}
//}
//int main()
//{
//	while (cin >> m >> n)
//	{
//		int x, y;
//		sum = 0;
//		vector<vector<char>> v(m + 1, vector<char>(n + 1));
//		for (int i = 1;i <= m;i++){
//			for (int j = 1;j <= n;j++){
//				cin >> v[i][j];
//				if (v[i][j] == '@')
//				{
//					x = i;y = j;
//					v[i][j] = '.';
//				}
//		
//			}
//		}
//		vr = v;
//		dfs(x, y);
//		cout << sum << endl;
//	}
//	return 0;
//}