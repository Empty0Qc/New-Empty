#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int l1 = s1.size();
		int l2 = s2.size();
		vector<vector<int>> v(l1+1,vector<int>(l2+1,0));
		for (int i = 0; i < l1; i++)v[0][i] = i;
		for (int i = 0; i < l2; i++)v[i][0] = i;
		for (int i = 0; i < l1; i++)
		{
			for (int j = 0; j < l2; j++)
			{
				int tmp = min(v[i - 1][j], v[i][j - 1]);
				v[i][j] = min((s1[i - 1] == s2[i - 1] ? 0 : 1) + v[i - 1][j - 1], tmp);
			}
		}
		cout << v[l1][l2] << endl;
	}
	return 0;
}