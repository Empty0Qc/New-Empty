//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		char symbol, symbol2;
//		string integer;
//		string decimals;
//		symbol = s[0];
//		integer = s.substr(1, s.find('.') - 1);
//		decimals = s.substr(s.find('.') + 1, s.find('E') - s.find('.') - 1);
//		symbol2 = s[s.find('E') + 1];
//		string mov = s.substr(s.find('E') + 2);
//		int int_mov = 0;
//		for(auto e : mov)
//		{
//			int_mov = int_mov * 10 + (e - '0');
//		}
//		if (symbol == '-')
//			cout << '-';
//		if (symbol2 == '-')
//		{
//			cout << "0.";
//			for (int i = 0;i < int_mov - 1;++i)
//				cout << 0;
//			cout << integer << decimals << endl;
//		}
//		else
//		{
//			cout << integer;
//			if (int_mov >= (int)decimals.size())
//			{
//				while (int_mov > (int)decimals.size())
//					decimals += "0";
//				cout << decimals << endl;
//			}
//			else
//			{
//				decimals.insert(int_mov, 1, '.');
//				cout << decimals << endl;
//			}
//
//		}
//	}
//	return 0;
//}