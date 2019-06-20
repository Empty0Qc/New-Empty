#include <iostream>
#include <string>
using namespace std;
#define ll long long
ll d = 1000000007;


int main()
{

	ll n,c;
	while (cin >> n)
	{
		c = 0;
		while (n != 0 && c++ <= 300000)
			n = ((n << 1) + 1) % d;
		cout << ((c + 2) / 3 > 100000 ? -1 : c) << endl;
	}
	return 0;
}