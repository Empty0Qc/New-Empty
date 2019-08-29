//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int num;
//		vector<int> vs;
//		vector<char> vch;
//		char ch, flag = '@';
//		for (int i = 0; i < n; i++)
//		{
//			if (i == 0)
//			{
//				cin >> num;
//				vs.push_back(num);
//				continue;
//			}
//			cin >> ch >> num;
//			if (i == n - 1)
//			{
//				if (flag == '@')
//				{
//					vs.push_back(num);
//					sort(vs.begin(), vs.end());
//					cout << vs[0] << " " << ch << " " << vs[vs.size() - 1] << " " << endl;
//				}
//				else if (flag == ch && ch != '-' && ch != '/')
//				{
//					vs.push_back(num);
//					sort(vs.begin(), vs.end());
//					for (auto e : vs)
//					{
//						if (e != vs[vs.size() - 1])
//							cout << e << " " << ch << " ";
//						else
//							cout << e << " ";
//					}
//				}
//				else if (flag == ch && ch == '-' || ch == '/')
//				{
//					vs.push_back(num);
//					for (auto e : vs)
//					{
//						if (e != vs[vs.size() - 1])
//							cout << e << " " << ch << " ";
//						else
//							cout << e << " ";
//					}
//				}
//				else if (flag != ch)
//				{
//					char tmp = vs[vs.size() - 1];
//					vs.resize(vs.size() - 1);
//					sort(vs.begin(), vs.end());
//					for (auto e : vs)
//						cout << e << " " << flag << " ";
//					cout << tmp << " " << ch << " " << num << " " << endl;
//				}
//			}
//			if (flag == '@')
//			{
//				flag = ch;
//				vs.push_back(num);
//			}
//			else if (flag != ch)
//			{
//				char tmp = vs[vs.size() - 1];
//				vs.resize(vs.size() - 1);
//				sort(vs.begin(), vs.end());
//				for (auto e : vs)
//					cout << e << " " << flag << " ";
//				vs.clear();
//				vs.push_back(tmp);
//				vs.push_back(num);
//				flag = ch;
//			}
//			else
//			{
//				vs.push_back(num);
//			}
//		}
//	}
//	return 0;
//}