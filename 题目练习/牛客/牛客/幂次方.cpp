//#include <iostream>
//#include <bitset>
//#include <string>
//using namespace std;
//int num;
//
//
//void _print(int n)
//{
//	if (n == 0) { cout << "0"; return; }
//	bitset<16> bs(n);
//	string s = bs.to_string();
//	bool flag = true;
//	int i = s.find('1');
//	if (i == string::npos)i = 1;
//	for (i = 0;i < 16;++i) {
//		if (s[i] == '1') {
//			if (flag) { cout << "2";flag = false; }
//			else cout << "+2";
//			if ((15 - i) != 1) {
//				cout << "(";
//				_print(15 - i);
//				cout << ")";
//			}
//		}
//	}
//}
//int main()
//{
//	while (cin >> num)_print(num),cout << endl;
//	return 0;
//}