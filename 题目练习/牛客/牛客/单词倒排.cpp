//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//
//		stack<string> ns;
//		string tmp = "";
//		for (int i = 0; i < s.size(); i++)
//		{
//			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
//				tmp += s[i];
//			else
//			{
//				if (!tmp.empty())
//					ns.push(tmp);
//				tmp = "";
//			}
//		}
//		if (!tmp.empty())
//			ns.push(tmp);
//		size_t len = ns.size();
//		for (int i = 0; i < len - 1; i++)
//		{
//			cout << ns.top() << " ";
//			ns.pop();
//		}
//		cout << ns.top() << endl;
//	}
//}