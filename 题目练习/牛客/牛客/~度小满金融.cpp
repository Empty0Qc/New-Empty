#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int _min,x,y;
struct Point{
	int a, b;
};
vector<Point> vt;
bool Check(int a, int b)
{
	for (auto e : vt)
	{
		if (e.a == a && e.b == b)
			return false;
	}
	return true;
}
void dfs(int a, int b,int pos)
{
	if (a == 0 && b == 0)
	{
		_min = _min < pos ? _min : pos;
		return;
	}
	if (pos < _min)
	{
		if (a > 0 && b > 0)
		{
			dfs(a - 1, b, pos + 1);
			dfs(a, b - 1, pos + 1);
		}
		else if (a > 0 && b < 0)
		{
			dfs(a - 1, b, pos + 1);
			dfs(a, b + 1, pos + 1);
		}
		else if (a < 0 && b < 0)
		{
			dfs(a + 1, b, pos + 1);
			dfs(a, b + 1, pos + 1);
		}
		else if (a < 0 && b > 0)
		{
			dfs(a + 1, b, pos + 1);
			dfs(a, b - 1, pos + 1);
		}
	}
}
int main()
{
	int n;
	while (cin >> x >> y >> n)
	{
		_min = 9;
		int a, b;
		vector<Point> v(n);
		for (auto& e : v) cin >> e.a >> e.b;
		vt = v;
		dfs(x, y, 0);
	}
	return 0;
}