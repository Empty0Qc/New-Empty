//

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		string vs = "";
//		//for (size_t i = 0; i < s.size(); i++)
//		//	vs += vs[i] == ' ' ? s[i]:((s[i] - 65) - 5 + 26) % 26 + 'A';
//		for (auto e : s)
//		if (e >= 'A' && e <= 'Z')
//			vs += ((e - 65) - 5 + 26) % 26 + 'A';
//		else
//			vs += e;
//		cout << vs << endl;
//	}
//	return 0;
//}

//int main()
//{
//	char s;
//flag1:
//	while (s = getchar())
//	{
//		if (s == '\n')
//		{
//			cout << endl;
//			goto flag1;
//		}
//		if (s == ' ')
//			cout << ' ';
//		else
//		{
//			char t = ((s - 65) - 5 + 26) % 26 + 'A';
//			cout << t;
//		}
//	}
//	return 0;
//}