#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

bool Check(string tmp)
{
	bool flag = true;
	for (auto e : tmp)
	{
		if (!isdigit(e))
		{
			flag = false;
			break;
		}
	}
	return flag;
}

int main()
{
	string cs;
	while (cin >> cs)
	{
		if (cs.empty())
			continue;
		int cot = 0;
		size_t pos = cs.find(',');
		while (pos != string::npos)
		{

			const string ss = cs.substr(0, pos);
			cs = cs.substr(pos + 1);
			pos = cs.find(',');
			if (Check(ss))
			{
				if ((ss[0] - '0') + (ss[ss.size() - 1] - '0') > 8)
					++cot;
			}
		}
		if (Check(cs))
		{
			if ((cs[0] - '0') + (cs[cs.size() - 1] - '0') > 8)
				++cot;
		}
		cout << cot << endl;
	}
	return 0;
}