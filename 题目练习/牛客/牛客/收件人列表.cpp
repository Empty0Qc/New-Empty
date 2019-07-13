//// write your code here cpp
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		string tmp;
//		vector<string> v(n);
//		getline(cin, tmp);
//		for (int i = 0; i < n; i++)
//			getline(cin, v[i]);
//		for (int i = 0; i < n; i++)
//		{
//			if (v[i].find(',') == string::npos && v[i].find(' ') == string::npos)
//				cout << v[i];
//			else
//				cout << '\"' << v[i] << '\"';
//			if (i != n - 1)
//				cout << ", ";
//		}
//		cout << endl;
//	}
//	return 0;
//}