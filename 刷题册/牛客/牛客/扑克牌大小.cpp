#include <iostream>
#include <string>
#include <map>
using namespace std;

void _print(const string& s)
{
	for (auto e : s)
		cout << e << " ";
	cout << endl;
}
int main()
{
	string a;
	while (getline(cin, a))
	{
		bool f = true;
		map<char, int> v;
		string s1 = "", s2 = "";
		int c1 = 0, c2 = 0,l1,l2;
		for (auto e : a)
		{
			if (e != ' '&&e != '-')
				v[e]++;
			if (e != ' ' && e != '-' && f)
				s1 += e;
			else if (e == '-' && f)
				f = false;
			else if (e != ' ')
				s2 += e;
		}
		if (s1 == "jokerJOKER" || s2 == "jokerJOKER")
		{
			cout << "joker JOKER" << endl;
			continue;
		}
		for (auto e : v)
		{
			if (e.second > 4)
				goto flag1;
		}
		l1 = s1.length(),l2 = s2.length();
		
		if (l1 == 4 || l2 == 4)
		{
			if (l1 != l2)
			{
				if (l1 == 4)
					_print(s1);
				else
					_print(s2);
			}
			else
			{
				if (s1 > s2)
					_print(s1);
				else
					_print(s2);
			}
		}
		else if (l1 != l2)
		{
flag1:
			cout << "ERROR" << endl;
			continue;
		}
		else
		{
			if (s1 > s2)
				_print(s1);
			else if (s1 < s2)
				_print(s2);
			else
				goto flag1;
		}
	}
	return 0;
}