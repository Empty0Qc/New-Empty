//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		vector<string> v(s.size(), "");
//		vector<queue<char>> vq(26);
//		for (size_t i = 0;i < s.size(); ++i)
//		{
//			if (!isupper(s[i]) && !islower(s[i]))
//			{
//				v[i] = s[i];
//			}
//			else
//			{
//				if (isupper(s[i]))
//					vq[s[i] - 'A'].push(s[i]);
//				else
//					vq[s[i] - 'a'].push(s[i]);
//			}
//		}
//		size_t i, j = 0;
//		for (i = 0;i < s.size();)
//		{
//			while (i < s.size() && v[i] != "") ++i;
//			while (j < 26 && vq[j].empty())j++;
//			if (j >= 26)
//				continue;
//			v[i] = vq[j].front();
//			vq[j].pop();
//		}
//		for (auto e : v)
//			cout << e;
//		cout << endl;
//	}
//	return 0;
//}