////https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
//
//
//菜鸡方法，大数不可为
//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <string>
//#include <iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//#define ll long long
//
//int main() {
//	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//	ll n, i = 0;
//	cin >> n;
//	string s[100000];
//	string arr[100000];
//	for (i = 0; i < n; i++)
//	{
//		cin >> s[i];
//		cin >> arr[i];
//	}
//	string t;
//	while (cin >> t)
//	{
//		bool f = true;
//		
//		for (i = 0; i < n && f; i++)
//		{
//			if (t == s[i])
//			{
//				cout << t << "=" << arr[i] << endl;
//				f = false;
//			}
//		}
//		if (f)
//			cout << "Not found" << endl;
//	}
//
//	return 0;
//}
//
//
//
//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <map>
//using namespace std;
//
//
//int main() {
//	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//	string temp;
//	getline(cin, temp);
//	int N = stoi(temp);
//
//	map<string, string> PhoneList;
//	for (int i = 0; i < N; i++)
//	{
//		string name;
//		string number;
//		cin >> name;
//		cin >> number;
//		PhoneList.insert(std::make_pair(name, number));
//	}
//	string name;
//	while (cin >> name)
//	{
//		std::map<string, string>::iterator it;
//		it = PhoneList.find(name);
//		if (it == PhoneList.end())
//			cout << "Not found" << endl;
//		else
//			cout << name << "=" << it->second << endl;
//	}	
//	return 0;
//}