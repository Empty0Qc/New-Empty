#include <iostream>
#include <cmath>
using namespace std;
int arr[100][100] = { 0 };

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int ddd(int n, int m)
{
	int x = n, y = m;
	int i, j;
	arr[1][1] = 1;
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= y; j++)
		{
			arr[i][j] = max(arr[i][j],arr[i - 1][j] + arr[i][j - 1]);
		}
	}
	int tmp = arr[x][y];
	return tmp;
}
int main()
{
	int n, m;
	cin >> n >> m;
	n++; m++;

	cout << ddd(n, m) << endl;
	return 0;
}