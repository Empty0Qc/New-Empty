//https://www.luogu.org/problemnew/show/P1060
#include <iostream>
#include <vector>
#include <algorithm>
#include <algorithm>
using namespace std;


int main()
{
	int com, con;
	while (cin >> com >> con)
	{
		int price[30] = { 0 };
		int wight[30] = { 0 };
		int f[30005] = { 0 };
		for (int i = 1; i <= con; i++)
		{
			cin >> price[i] >> wight[i];
			wight[i] *= price[i];
		}
		for (int i = 1; i <= con; i++)
		{
			for (int j = com; j >= price[i]; j--)
			{
				f[j] = max(wight[i] + f[j - price[i]],f[j]);
			}
		}
		cout << f[com] << endl;
	}
	return 0;
}