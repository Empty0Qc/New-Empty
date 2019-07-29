//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		stack<string> sta;
//		while (s.find(' ') != string::npos)
//		{
//			sta.push(s.substr(0, s.find(' ')));
//			s = s.substr(s.find(' ') + 1);
//		}
//		sta.push(s);
//		int n = sta.size();
//		for (int i = 0;i < n;++i)
//		{
//			if (i != n - 1)
//				cout << sta.top() << " ";
//			else
//				cout << sta.top() << endl;
//			sta.pop();
//		}
//	}
//	return 0;
//}