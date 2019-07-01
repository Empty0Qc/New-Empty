////https://www.nowcoder.com/questionTerminal/e2422543519249f292d8435394ab82fe
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{	
//		while (s.size() != 1)
//		{
//			string st = "";
//			int tmp = 0;
//			for (auto e : s)
//			tmp += (e - '0');
//			while (tmp)
//			{
//				st += ((tmp % 10) + '0');
//				tmp /= 10;
//			}
//			s = st;
//		}  
//		cout << s << endl;
//	}
//	return 0;
//}
//
////int main()
////{
////	int n;
////	while (cin >> n)
////	{
////		while (n >= 10)
////		{
////			int tmp = 0;
////			while (n)tmp += n % 10, n /= 10;
////			n = tmp;
////		}
////		cout << n << endl;
////	}
////	return 0;
////}