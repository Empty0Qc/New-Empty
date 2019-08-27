//#include <iostream>
//#include <string>
//#include <sstream>
//#include <vector>
//using namespace std;
//void get(vector<int>& v, string s)
//{
//	int tmp;
//	while (s.find('.') != string::npos)
//	{
//		string ss = s.substr(0, s.find('.'));
//
//		stringstream sss;
//		sss << ss;
//		sss >> tmp;
//		v.push_back(tmp);
//
//		s = s.substr(s.find('.') + 1);
//	}
//	if (!s.empty())
//	{
//		stringstream sss;
//		sss << s;
//		sss >> tmp;
//		v.push_back(tmp);
//	}
//	while (v.size() < 4)
//	{
//		v.push_back(0);
//	}
//}
//
//int main()
//{
//	int n;
//	string s1, s2;
//	vector<int> v1, v2;
//	while (cin >> n)
//	{
//		vector<string> res;
//		while (n--)
//		{
//			v1.clear();
//			v2.clear();
//			cin >> s1 >> s2;
//			get(v1, s1);
//			get(v2, s2);
//			bool fa = true;
//			for (int i = 0; i < 4; ++i)
//			{
//				if (v1[i] < v2[i])
//				{
//					res.push_back("true");
//					fa = false;
//					break;
//				}
//			}
//			if (fa)
//				res.push_back("false");
//		}
//		for (auto e : res)
//			cout << e << endl;
//	}
//	return 0;
//}