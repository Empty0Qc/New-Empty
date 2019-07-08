//https://www.nowcoder.com/questionTerminal/d95d98a2f96e49078cd7df84ba0c9d79

#include <iostream>
#include <cstdio>
using namespace std;
int common_year[15] = {0,0,0,31,30,31,30,31,31,30,31,30,31,31,28};
//y : 所求年份 / m : 所求年的月份 / n : 所求的该月第几个星期w w : 星期几 flag : 1:正向 2:反向
int slove(int c,int y, int m, int n, int w,bool flag)
{
	if (m == 1 || m == 2)y--;
	m = m == 1 ? 13 : m;
	m = m == 2 ? 14 : m;
	int cnt = 0, i = 0, border;
	border = m == 13 ? common_year[m] + 1 : common_year[m];
	if (flag)
	for (i = 1;i <= border;)
	{
		int _w = (y + (int)(y / 4) + (int)(c / 4) - 2 * c + (int)(26 * (m + 1) / 10) + i - 1 ) % 7;
		if (_w == w)++cnt;
		if(cnt == n) break;
		if (_w == w)i += 7;
		else i++;
	}
	else
	for (i = border; i >= 1;)
	{
		int _w = (y + (int)(y / 4) + (int)(c / 4) - 2 * c + (int)(26 * (m + 1) / 10) + i - 1) % 7;
		if (_w == w)++cnt;
		if (cnt == n) break;
		if (_w == w)i -= 7;
		else i--;
	}
	return i;	
}
int main()
{
	int y;
	while (cin >> y)
	{
		int ty = y;
		int c = y / 100;
		y = y % 100;
		int t = -1;
		if (ty % 400 == 0 || (ty % 100 != 0 && ty % 4 == 0))t = 1;
		printf("%4d-01-01\n", ty);
		printf("%4d-01-%02d\n", ty, slove(c, y, 1, 3, 1, true) + t);
		printf("%4d-02-%02d\n", ty, slove(c, y, 2, 3, 1, true) + t);
		printf("%4d-05-%02d\n", ty, slove(c, y, 5, 1, 1, false) + t);
		printf("%4d-07-04\n" , ty);
		printf("%4d-09-%02d\n", ty, slove(c, y, 9, 1, 1, true) + t);
		printf("%4d-02-%02d\n", ty, slove(c, y,11, 4, 4, true) + t);
		printf("%4d-12-25\n" , ty);
	}
	return 0;
}