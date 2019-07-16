//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <set>
//using namespace std;
//
//unordered_map<char, char> dic;
//void doit()
//{
//	dic.emplace('A', '2');
//	dic.emplace('B', '2');
//	dic.emplace('C', '2');
//	dic.emplace('D', '3');
//	dic.emplace('E', '3');
//	dic.emplace('F', '3');
//	dic.emplace('G', '4');
//	dic.emplace('H', '4');
//	dic.emplace('I', '4');
//	dic.emplace('J', '5');
//	dic.emplace('K', '5');
//	dic.emplace('L', '5');
//	dic.emplace('M', '6');
//	dic.emplace('N', '6');
//	dic.emplace('O', '6');
//	dic.emplace('P', '7');
//	dic.emplace('Q', '7');
//	dic.emplace('R', '7');
//	dic.emplace('S', '7');
//	dic.emplace('T', '8');
//	dic.emplace('U', '8');
//	dic.emplace('V', '8');
//	dic.emplace('W', '9');
//	dic.emplace('X', '9');
//	dic.emplace('Y', '9');
//	dic.emplace('Z', '9');
//}
//int main()
//{
//	doit();
//	int n;
//	while (cin >> n && n > 0)
//	{
//		set<string> hs;
//		string s;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> s;
//			string tmp = "";
//			for (auto e : s)
//			{
//				if (isdigit(e)) tmp += e;
//				else if (isupper(e)) tmp += dic[e];
//			}
//			if (tmp.size() != 7)continue;
//			tmp = tmp.substr(0, 3) + "-" + tmp.substr(3, 4);
//			hs.emplace(tmp);
//		}
//		for (auto e : hs)
//			cout << e << endl;
//		cout << endl;
//	}
//	return 0;
//}