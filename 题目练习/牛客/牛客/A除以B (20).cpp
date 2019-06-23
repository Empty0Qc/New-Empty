#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s,c = "";
	int n, tmp,res = 0;
	cin >> s >> n;
	for (size_t i = 0; i < s.size();i++)
	{
		tmp = res * 10 + (s[i] - '0');
		res = tmp % n;
		if (i == 0 && tmp / n == 0)continue;
		c.append(1, tmp / n + '0');
	}
	cout << c + " " << res << endl;
	return 0;
}