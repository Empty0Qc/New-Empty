//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		int flag[4] = { 0 };
//		if (s.size() <= 8) goto NG;
//		for (auto e : s)
//		{
//			if (isdigit(e)) flag[0] = 1;
//			else if (isupper(e)) flag[1] = 1;
//			else if (islower(e)) flag[2] = 1;
//			else flag[3] = 1;
//		}
//		if (flag[0] + flag[1] + flag[2] + flag[3] < 3)
//			goto NG;
//		for (size_t i = 0;i < s.size() - 6;++i)
//		{
//			for (size_t j = i + 3;j < s.size();++j)
//			{
//				if (s.substr(i, 3).compare(s.substr(j, 3)) == 0)
//					goto NG;
//			}
//		}
//		cout << "OK" << endl;
//		continue;
//	NG:
//		cout << "NG" << endl;
//	}
//	return 0;
//}