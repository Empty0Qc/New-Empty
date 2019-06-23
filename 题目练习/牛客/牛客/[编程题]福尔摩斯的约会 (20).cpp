//https://www.nowcoder.com/questionTerminal/7335f56d49e946c2a7cd2a93661b293b
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//string mp[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
//
//int main()
//{
//	vector<string> v;
//	for (int i = 0; i < 4; i++)
//	{
//		string tmp;
//		cin >> tmp;
//		v.push_back(tmp);
//	}
//	bool f = true;
//	for (int i = 0; i < v[0].size(); i++)
//	{
//		
//		if (v[0][i] == v[1][i])
//		{ 
//			if (v[0][i] > '9' && f)
//			{
//				cout << mp[v[1][i] - 'A'] << " ";
//				f = false;
//			}
//			else if (!f)
//			{
//				if (v[1][i] > '9' && v[1][i] >= 'A' && v[1][i] <= 'N')
//					cout << v[1][i] - 'A' + 10 << ":";
//				else
//					cout << "0" << v[1][i] << ":";
//				i = v[0].size();
//			}	
//		}
//	}
//	for (int i = 0; i < v[2].size(); i++)
//	{
//		if (v[2][i] == v[3][i])
//		{
//			if ((v[2][i] >= 'A' && v[2][i] <= 'Z') || (v[2][i] >= 'a' && v[2][i] <= 'z') || (v[2][i] >= '0' && v[2][i] <= '9'))
//			{
//				if (i < 10)
//					cout << "0" << i;
//				else
//					cout << i;
//				i = v[2].size();
//			}
//		}
//	}
//	
//	
//		
//	return 0;
//}