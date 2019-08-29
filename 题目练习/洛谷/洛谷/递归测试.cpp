//#include <iostream>
//using namespace std;
//#define ull unsigned long long 
//int fun(double a, double b, double n)
//{
//
//	if (fabs(n - 1) < 0.001)
//		return b;
//	return fun(b,a + b,n - 1);
//}
//
//int main()
//{
//	double i;
//	while(cin >> i)
//		cout << fun(1,1,i) << endl;
//	return 0;
//}
#include <iostream> 
#include <vector>
using namespace std;

void _move(vector<int>& v, bool (*fun)(int,vector<int>))
{
	if (v.size() == 0)
		return;
	int begin = 0;
	int end = v.size() - 1;;
	while (begin < end)
	{
		while (begin < end && !fun(begin,v))++begin;
		while (begin < end && fun(end,v))--end;
		if (begin < end)
		{
			int tmp = v[begin];
			v[begin] = v[end];
			v[end] = tmp;
			++begin;
			--end;
		}
	}
}

bool fun(int point,vector<int> v)
{
	return bool(point % 2);
}

int main()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
		v.push_back(i);
	_move(v, fun);
	for (auto e : v)
		cout << e << endl;
	return 0;
}
