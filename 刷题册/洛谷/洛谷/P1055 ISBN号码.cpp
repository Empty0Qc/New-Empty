//https://www.luogu.org/problemnew/show/P1055
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		int sum = 0, k = 1;
		for (int i = 0; i < 12; i++)
		{
			if (s[i] != '-')
			{
				int tmp = s[i] - '0';
				sum += tmp*k;
				k++;
			}
		}
		sum %= 11;
		if (sum == 10 && k == 10)
		{
			if (s[12] == 'X')
				cout << "Right" << endl;
			else
			{
				for (int i = 0; i < 12; i++)
					cout << s[i];
				cout << "X" << endl;
			}
		}
		else if (k == 10)
		{
			if ((s[12] - '0') == sum)
				cout << "Right" << endl;
			else
			{
				for (int i = 0; i < 12; i++)
					cout << s[i];
				cout << sum << endl;
			}
		}
	}
	return 0;
}