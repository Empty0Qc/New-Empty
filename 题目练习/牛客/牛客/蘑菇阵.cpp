//#include <iostream>
//#include <vector>
//#include <iomanip>
//#include <stdio.h>
//using namespace std;
//
//int main()
//{
//	int n, m, k;
//	while (cin >> n >> m >> k)
//	{
//		vector<vector<int>> book(n + 1,vector<int>(m + 1,0));
//		vector<vector<float>> vf(n + 1,vector<float>(m + 1,0));
//		for (int i = 0;i < k;i++)
//		{
//			int x, y;
//			cin >> x >> y;
//			--book[x][y];
//		}
//		vf[1][1] = 1.0;
//		for (int i = 1;i <= n;i++)
//		{
//			for (int j = 1;j <= m;j++)
//			{
//				if (i == 1 && j == 1)
//					continue;
//				if (book[i][j] != 0)
//					vf[i][j] = 0.0;
//				else
//					vf[i][j] = (i == n ? 1 : 0.5) * vf[i][j - 1] + (j == m ? 1 : 0.5) * vf[i - 1][j];
//			}
//		}
//		float ans = vf[n][m];
//		cout.setf(ios::fixed);
//		cout << setprecision(2) << ans << endl;
//		//printf("%.2lf", vf[n][m]);
//	}
//	return 0;
//}