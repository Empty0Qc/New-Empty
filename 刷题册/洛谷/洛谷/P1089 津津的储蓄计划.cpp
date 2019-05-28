#include <iostream>
using namespace std;

int main()
{
	int x = 0;//津津存在妈妈那的钱
	int y = 0;//津津自己除去预算手上的钱
	for (int i = 1; i <= 12; i++)
	{
		int t;
		cin >> t;
		y = y + 300 - t;
		if (y >= 0)
		{
			if (y >= 100)
			{
				x += y - (y % 100);
				y = y % 100;
			}
		}
		else
		{
			cout << -i << endl;
			return 0;
		}
	}
	cout << x * 20 / 100 + x  + y << endl;
	return 0;
}