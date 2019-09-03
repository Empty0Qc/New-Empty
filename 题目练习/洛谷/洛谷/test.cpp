//#include <iostream>
//#include <string>
//using namespace std;
//#define ull unsigned long long
////unsigned long long 
//int main()
//{
//	ull a = 1024;
//	ull tmp = 1;
//	ull x = 0;
//	string s = "";
//	for (int i = 0; i < 64; ++i)
//	{
//		ull pos = (1 << i) & a;
//		pos = pos >> (63 - i);
//		x = (x | pos);
//	}
//
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	/*union {
//		int a;
//		char b;
//	}x;
//	x.a = 1;
//	if (x.b == 1) {
//		cout << "little" << endl;
//		cout << (int)x.b << endl;
//	}
//	else {
//		cout << "big" << endl;
//	}
//	*/
//	int a = 1;
//	char* b = (char*)& a;
//	cout << (int)* b << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <bitset>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int n = 10;
//	string s = bitset<32>(n).to_string();
//	cout << count(s.begin(),s.end(),'1');
//	return 0;
//}

//#include <iostream>
//#include <unordered_map>
//#include <string>
//#include <vector>
//#include <sstream>
//using namespace std;
//
//
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		unordered_map<int, int> mp;
//		int cot = 0;
//		while (s.find(',') != string::npos)
//		{
//			int pos = s.find(',');
//			string ss = s.substr(0, pos);
//			s = s.substr(pos + 1);
//			int tmp;
//			stringstream sss;
//			sss << ss;
//			sss >> tmp;
//			++mp[tmp];
//		}
//		int tmp;
//		stringstream sss;
//		sss << s;
//		sss >> tmp;
//		++mp[tmp];
//		for (auto& e : mp)
//		{
//			if (e.first > 0 && mp[-e.first] > 0)
//			{
//				++cot;
//				--mp[e.first];
//				--mp[-e.first];
//			}
//		}
//		cout << cot << endl;
//	}
//	return 0;
//}