////https://www.nowcoder.com/questionTerminal/d290db02bacc4c40965ac31d16b1c3eb
//#include <iostream>
//#include <string>
//#include <map>
//#include <unordered_map>
//using namespace std;
//unordered_map<char, int> 
//help{{ '3', 1 }, { '4', 2 }, { '5', 3 }, { '6', 4 }, 
//	 { '7', 5 }, { '8', 6 }, { '9', 7 }, { '1', 8 }, 
//	 { 'J', 9 }, { 'Q', 10}, { 'K', 11}, { 'A', 12}, { '2', 13}};
//void _print(const string& s)
//{
//	for (auto e : s)
//		cout << e;
//	cout << endl;
//}
//void compare(const string& s1, const string& s2)
//{
//	if (s1 > s2)
//		_print(s1);
//	else if (s1 < s2)
//		_print(s2);
//}
//int main()
//{
//	string a;
//	while (getline(cin, a))
//	{
//		bool f = true, ff = true;
//		map<string, int> v;
//		string s1 = "", s2 = "";
//		int c1 = 0, c2 = 0, l1, l2;
//		for (auto e : a)
//		{
//			if (e == '0')
//				continue;
//			if (e != '-' && f)
//				s1 += e;
//			else if (e == '-' && f)
//				f = false;
//			else
//				s2 += e;
//		}
//		if (s1 == "joker JOKER" || s2 == "joker JOKER")
//		{
//			cout << "joker JOKER" << endl;
//			continue;
//		}
//		for (auto e : v)
//		{
//			if (e.second > 4)
//				goto flag1;
//		}
//		l1 = s1.length(), l2 = s2.length();
//		if (s1 == s2)
//			goto flag1;
//		if (l1 == 7 || l2 == 7)
//		{
//			if (l1 != l2)
//			{
//				if (l1 == 7)
//				{
//					_print(s1);
//					continue;
//				}
//				else
//				{
//					_print(s2);
//					continue;
//				}
//			}
//			else
//			{
//				if (help[s1[0]] > help[s2[0]])
//				{
//					_print(s1);
//					continue;
//				}
//				else
//				{
//					_print(s2);
//					continue;
//				}
//			}
//		}
//		else if (l1 != l2)
//		{
//		flag1:
//			cout << "ERROR" << endl;
//			continue;
//		}
//		else
//		{
//			if (help[s1[0]] > help[s2[0]])
//			{
//				_print(s1);
//				continue;
//			}
//			else
//			{
//				_print(s2);
//				continue;
//			}
//		}
//
//	}
//	return 0;
//}
//
//
////#include <iostream>
////#include <string>
////#include <unordered_map>
////using namespace std;
////
////unordered_map<char, int> 
////help{{ '3', 1 }, { '4', 2 }, { '5', 3 }, { '6', 4 }, 
////	 { '7', 5 }, { '8', 6 }, { '9', 7 }, { '1', 8 }, 
////	 { 'J', 9 }, { 'Q', 10}, { 'K', 11}, { 'A', 12}, { '2', 13}};
////string del_0(string str) {
////	while (str.find('0') != string::npos)
////		str.erase(str.find('0'), 1);
////	return str;
////}
////int main() {
////	string str, s1, s2, s1_, s2_;
////	while (getline(cin, str)) {
////		s1_ = str.substr(0, str.find('-'));
////		s1 = del_0(s1_);
////		s2_ = str.substr(str.find('-') + 1);
////		s2 = del_0(s2_);
////		if (s1 == "joker JOKER" || s2 == "joker JOKER") cout << "joker JOKER" << endl;
////		else if (s1.size() == 7 || s2.size() == 7) {//有炸弹
////			if (s1.size() == 7 && s2.size() == 7)//炸弹比较
////			if (help[s1[0]] > help[s2[0]]) cout << s1_ << endl;
////			else cout << s2_ << endl;
////			else if (s1.size() == 7) cout << s1_ << endl;
////			else cout << s2_ << endl;
////		}
////		else if (s1.size() == s2.size())//其余只能同等长度比较
////		if (help[s1[0]] > help[s2[0]]) cout << s1_ << endl;
////		else cout << s2_ << endl;
////		else cout << "ERROR" << endl;
////	}
////}
