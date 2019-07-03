//////https://www.nowcoder.com/questionTerminal/4060ac7e3e404ad1a894ef3e17650423
////#include <iostream>
////#include <string>
////using namespace std;
////
////int main()
////{
////	string s;
////	while (getline(cin,s))
////	{
////		int i = 0;
////		while ((i = s.find(' ')) > -1)
////		{
////			s.erase(i,1);
////			s.insert(i,"%20");
////		}
////		cout << s << endl;
////	}
////	return 0;
////}
//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		string s(str);
//		int i = 0;
//		while ((i = s.find(' ')) > -1)
//		{
//			s.erase(i, 1);
//			s.insert(i, "%20");
//		}
//		auto ret = s.c_str();
//		strcpy(str, ret);
//	}
//};