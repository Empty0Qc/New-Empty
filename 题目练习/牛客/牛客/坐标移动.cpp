//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		int x = 0, y = 0;
//		while (s.find(";") != string::npos)
//		{
//			string tmp = s.substr(0, s.find(";"));
//			s = s.substr(s.find(";") + 1);
//			int len = tmp.size();
//			if (len > 1 && len <= 3)
//			{
//				char c;
//				int num = 0;
//				if (tmp[0] == 'A' || tmp[0] == 'S' || tmp[0] == 'D' || tmp[0] == 'W')
//					c = tmp[0];
//				else
//					continue;
//				if ((len == 2 && !isdigit(tmp[1])) || (len == 3 && (!isdigit(tmp[1]) || !isdigit(tmp[2]))))
//					continue;
//				num = (len == 2) ? (tmp[1] - '0') : num = 10 * (tmp[1] - '0') + (tmp[2] - '0');
//				switch (c)
//				{
//				case 'A':
//					x -= num;
//					break;
//				case 'S':
//					y -= num;
//					break;
//				case 'W':
//					y += num;
//					break;
//				case 'D':
//					x += num;
//					break;
//				}
//			}
//		}
//		cout << x << "," << y << endl;
//	}
//	return 0;
//}