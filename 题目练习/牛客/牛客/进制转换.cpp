////#include <iostream>
////#include <unordered_map>
////#include <string>
////#include <algorithm>
////using namespace std;
////
////unordered_map<char, int> mp{ {'A',10},{'B',11},{'C',12},{'D',13},{'E',14},{'F',15} };
////
////
////int main()
////{
////	string s;
////	while (cin >> s)
////	{
////		long long sum = 0;
////		s = s.substr(2);
////		reverse(s.begin(), s.end());
////		for (size_t i = 0;i < s.size(); ++i)
////		{
////			if (s[i] >= '0' && s[i] <= '9')
////			{
////				sum += (long long)((pow(16, i)) * (s[i] - '0'));
////			}
////			else
////			{
////				sum += (long long)(pow(16, i) * mp[s[i]]);
////			}
////		}
////		cout << sum << endl;
////	}
////	return 0;
////}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> hex >> n)
//		cout << n << endl;
//	return 0;
//}