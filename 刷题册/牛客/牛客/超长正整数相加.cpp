////https://www.nowcoder.com/questionTerminal/5821836e0ec140c1aa29510fd05f45fc
//
//#include <iostream>
//#include <string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		string s;
//		int carry = 0;
//		const size_t maxl = s1.size() >	s2.size() ? s1.size() : s2.size();
//		reverse(s1.begin(), s1.end());
//		reverse(s2.begin(), s2.end());
//		for (size_t i = 0; i < maxl; i++)
//		{
//			int a = i < s1.size() ? s1[i] - '0' : 0;
//			int b = i < s2.size() ? s2[i] - '0' : 0;
//			int val = (a + b + carry) % 10;
//			carry = (a + b + carry) / 10;
//			s.insert(s.begin(), val + '0');
//		}
//		if (carry)
//			s.insert(s.begin(), '1');
//		cout << s << endl;
//	}
//	return 0;
//}