#include <iostream>
using namespace std;

int main()
{
	int x = 0;//�����������ǵ�Ǯ
	int y = 0;//����Լ���ȥԤ�����ϵ�Ǯ
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