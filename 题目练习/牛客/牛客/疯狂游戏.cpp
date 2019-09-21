//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		vector<string> v;
//		int pos = s.find(' ');
//		while (pos != string::npos)
//		{
//			v.push_back(s.substr(0, pos));
//			s = s.substr(pos + 1);
//			pos = s.find(' ');
//		}
//		v.push_back(s);
//		string tmp = v[0];
//		int i = 0;
//		bool flag = true;
//		while (i < v[0].size() && flag)
//		{
//			for (auto e : v)
//			{
//				if (flag)
//					flag = (v[0][i] == e[i]);
//				else
//					break;
//			}
//			if (!flag)
//				break;
//			else
//				++i;
//		}
//		cout << v[0].substr(0, i) << endl;
//	}
//	return 0;
//}
//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (getline(cin,s))
//	{
//		vector<int> v;
//		int pos = s.find(' ');
//		int n = stoi(s.substr(0,pos ));
//		s = s.substr(pos + 1);
//		pos = s.find(',');
//		while (pos != string::npos)
//		{
//			v.push_back(stoi(s.substr(0, pos)));
//			s = s.substr(pos + 1);
//			pos = s.find(',');
//		}
//		v.push_back(stoi(s));
//		int left = 0;
//		int right = v.size() - 1;
//		pos = (left + right) / 2;
//		while (left < right && v[pos] != n)
//		{
//			if (v[pos] > n)
//			{
//				right = pos - 1;
//			}
//			else if (v[pos] < n)
//			{
//				left = pos + 1;
//			}
//			pos = (left + right) / 2;
//		}
//		if (left != right)
//		{
//			while (left >= 0 && v[left] == n) --left;
//			++left;
//			while (right < v.size() && v[right] == n) ++right;
//			--right;
//			cout << left << "," << right << endl;
//		}
//		else
//			cout << "-1,-1" << endl;
//
//	}
//	return 0;
//}



//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int GetMin(string source, string dest)
//{
//	if (source.empty() || dest.empty())
//		return dest.size() + source.size();
//	size_t source_len = source.size();
//	size_t dest_len = dest.size();
//	vector<vector<int>> flag(source_len + 1,vector<int>(dest_len + 1,0));
//	for (size_t i = 0; i <= dest_len; ++i)
//		flag[0][i];
//	for (size_t i = 0; i <= source_len; ++i)
//		flag[i][0];
//	int tmp = 0;
//	for (int i = 0; i < dest_len; ++i)
//	{
//		for (int j = 0; j < source_len; ++j)
//		{
//			if (source[j] == dest[i])
//				flag[j + 1][i + 1] = flag[j][i];
//			else
//			{
//				tmp = min(flag[j][i] + 1, flag[j][i + 1] + 1);
//				flag[j + 1][i + 1] = min(flag[j + 1][i] + 1, tmp);
//			}
//		}
//	}
//	return flag[source_len][dest_len] + 1;
//}
//
//int main()
//{
//	string a, b;
//	while (cin >> a >> b)
//		cout << GetMin(a, b) << endl;
//	return 0;
//}