#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	char a;
	string s = "";
	vector<string> v;
	while ((a = getchar()) != '\n')
	{
		if (a == ' ')
		{
			v.push_back(s);
			s = "";
		}
		else if (a == '"')
		{
			v.push_back(s);
			s = "";
			while ((a = getchar()) != '"')
			{
				s = s + a;
			}
			v.push_back(s);
			s = "";
		}
		else
			s = s + a;		
	}
	if (s != "" && s != " ")v.push_back(s);
	cout << v.size() << endl;
	for (auto& e : v)
	{
		cout << e << endl;
	}
	return 0;
}

