////https://www.nowcoder.com/questionTerminal/3959837097c7413a961a135d7104c314
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		int l1 = s1.size();
//		int l2 = s2.size();
//		vector<vector<int>> v(l1+1,vector<int>(l2+1,0));
//		for (int i = 1; i <= l2; i++)v[0][i] = i;
//		for (int i = 1; i <= l1; i++)v[i][0] = i;
//		for (int i = 1; i <= l1; i++)
//		{
//			for (int j = 1; j <= l2; j++)
//			{
//				int tmp = min(v[i - 1][j], v[i][j - 1]) + 1;
//				v[i][j] = min((s1[i - 1] == s2	[j - 1] ? 0 : 1) + v[i - 1][j - 1], tmp);
//			}
//		}
//		cout << v[l1][l2] << endl;
//	}
//	return 0;
//}