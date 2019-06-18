//https://www.luogu.org/problemnew/show/P1149
#include <iostream>
using namespace std;

int n, m[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
int co = 0;
int a[2000];
int match(int x)
{
	int t = 0;
	for (int i = x; i != 0; i /= 10)
		t += m[i % 10];
	if (x == 0)
		t += m[x];
	return t;
}
int main()
{
	for (int i = 0; i < 2000; i++)
		a[i] = match(i);
	while (cin >> n)
	{
		co = 0;
		for (int i = 0; i <= 1000; i++)
		{
			for (int j = 0; j <= 1000; j++)
			{
				if (a[i] + a[j] + a[i + j] + 4 == n)
					co++;
			}
		}
		cout << co << endl;
	}
	return 0;
}