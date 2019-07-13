////// write your code here cpp
////
////#include <iostream>
////#include <vector>
////#include <string>
////#include <map>
////using namespace std;
////
////int main()
////{
////	string s1, s2;
////	while (getline(cin, s1) && getline(cin, s2))
////	{
////		map<string, int> mp;
////		int start = 0;
////		while (!s1.empty())
////		{
////			if (s1[start] == ',')
////			{
////				s1 = s1.substr(1, s1.size() - 1);
////				continue;
////			}
////			if (s1[start] != '"')
////			{
////				if (s1.find(',') != string::npos)
////				{
////					mp[s1.substr(start, s1.find(','))]++;
////					s1 = s1.substr(s1.find(',') + 1, s1.size() - s1.find(','));
////				}		
////				else
////				{
////					mp[s1]++;
////					s1 = "";
////				}
////					
////			}
////			else
////			{
////				string tmp = s1.substr(0,1);
////				s1 = s1.substr(1, s1.size() - 1);
////				tmp += s1.substr(0, s1.find('"') + 1);
////				s1 = s1.substr(s1.find('"') + 1, s1.size() - s1.find('"') - 1);
////				mp[tmp]++;
////			}
////		}
////		mp[s2] != 0 ? (cout << "Ignore") : (cout << "Important!");
////		cout << endl;
////	}
////	return 0;
////}
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s, res;
//	while (getline(cin, s))
//	{
//		getline(cin, res);
//		bool flag = false;
//		for (int i = 0; i < s.length(); i++)
//		{
//			string t;
//			if (s[i] == '"')
//			{
//				i++;
//				while (i<s.length() && s[i] != '"')
//				{
//					t += s[i];
//					i++;
//				}
//				if (t == res)
//				{
//					flag = true;
//					break;
//				}
//			}
//			else if (s[i] != ',')
//			{
//				while (i<s.length() && s[i] != ',')
//				{
//					t += s[i];
//					i++;
//				}
//				if (t == res)
//				{
//					flag = true;
//					break;
//				}
//			}
//		}
//		if (flag == true)
//			cout << "Ignore" << endl;
//		else
//			cout << "Important!" << endl;
//	}
//	return 0;
//}