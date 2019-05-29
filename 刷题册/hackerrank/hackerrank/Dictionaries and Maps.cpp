//https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
/*Objective
Today, we're learning about Key-Value pair mappings using a Map or Dictionary data structure. Check out the Tutorial tab for learning materials and an instructional video!

Task
Given  names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will then be given an unknown number of names to query your phone book for. For each  queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; if an entry for  is not found, print Not found instead.

Note: Your phone book should be a Dictionary / Map / HashMap data structure.

	  Input Format

	  The first line contains an integer, , denoting the number of entries in the phone book.
	  Each of the  subsequent lines describes an entry in the form of  space - separated values on a single line.The first value is a friend's name, and the second value is an -digit phone number.

	  After the  lines of phone book entries, there are an unknown number of lines of queries.Each line(query) contains a  to look up, and you must continue reading lines until there is no more input.

  Note: Names consist of lowercase English alphabetic letters and are first names only.
  */

////菜鸡方法，大数不可为
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



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	string temp;
	getline(cin, temp);
	int N = stoi(temp);

	map<string, string> PhoneList;
	for (int i = 0; i < N; i++)
	{
		string name;
		string number;
		cin >> name;
		cin >> number;
		PhoneList.insert(std::pair<string, string>(name, number));
	}
	string name;
	while (cin >> name)
	{
		std::map<string, string>::iterator it;
		it = PhoneList.find(name);
		if (it == PhoneList.end())
			cout << "Not found" << endl;
		else
			cout << name << "=" << it->second << endl;
	}	
	return 0;
}