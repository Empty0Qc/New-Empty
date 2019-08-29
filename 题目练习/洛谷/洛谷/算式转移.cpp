#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int n;
	while (cin >> n)
	{
		int num;
		vector<char> vs;
		vector<char> vch;
		char ch,flag = '@';
		for (int i = 0; i < n; i++)
		{
			if (i == 0)
			{
				cin >> num;
				vs.push_back(num + '0');
				continue;
			}
			cin >> ch >> num;
			if (i == n - 1)
			{
				if (flag == '@')
				{
					vs.push_back(num);
					sort(vs.begin(), vs.end());
					cout << vs.begin() << ch << vs.end() << endl;
				}
				else if(flag == ch && ch != '-' && ch != '/')
				{
					vs.push_back(num);
					sort(vs.begin(), vs.end());
					for (auto e : vs)
					{
						if (e != vs.end())
							cout << e << ch;
						else
							cout << e;
					}
				}
				else if (flag != ch)
				{
					char tmp = vs[vs.size() - 1];
					vs.resize(vs.size() - 1);
					sort(vs.begin(), vs.end());
					for (auto e : vs)
						cout << e << flag;
					cout << tmp << ch << num << endl;					
				}
			}
			if (flag == '@')
			{
				flag = ch;
				vs.push_back(num);
			}
			else if (flag != ch)
			{
				char tmp = vs[vs.size() - 1];
				vs.resize(vs.size() - 1);
				sort(vs.begin(), vs.end());
				for (auto e : vs)
					cout << e << flag;
				vs.clear();
				vs.push_back(tmp);
				vs.push_back(num);
				flag = '@';
			}
			else
			{
				vs.push_back(num);
			}
		}
	}
	return 0;
}