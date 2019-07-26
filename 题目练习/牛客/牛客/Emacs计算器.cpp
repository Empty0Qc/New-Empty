//// write your code here cpp
//
//#include <iostream>
//#include <stack>
//#include <string>
//#include <sstream>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		stack<int> num;
//		string s;
//		for (int i = 0;i < n;++i)
//		{
//			cin >> s;
//			if (s[0] >= '0' && s[0] <= '9')
//			{
//				stringstream tmp;
//				tmp << s;
//				int t;
//				tmp >> t;
//				num.push(t);
//			}
//			else
//			{
//				stringstream tmp;
//				tmp << s;
//				char t;
//				tmp >> t;
//				int right = num.top();num.pop();
//				int left = num.top();num.pop();
//				if (t == '+')
//					num.push(left + right);
//				else if (t == '-')
//					num.push(left - right);
//				else if (t == '*')
//					num.push(left * right);
//				else if (t == '/' && right == 0)
//					return 0;
//				else
//					num.push(left / right);
//			}
//		}
//		cout << num.top() << endl;
//	}
//	return 0;
//}