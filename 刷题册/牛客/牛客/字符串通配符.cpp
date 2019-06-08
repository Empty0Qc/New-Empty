//#include <iostream>
//#include <string>
//using namespace std;
//
//
//bool isMatc(const char *p, const char *s)
//{
//	bool start = false;
//	const char *str, *ptr;
//	for (ptr = p, str = s; *str != '\0'; str++, ptr++)
//	{
//		switch (*ptr)
//		{
//		case '?':
//			break;
//		case '*':
//			start = true;
//			 p = ptr, s = str;
//			while (*p == '*')p++;
//			if (*p == '\0')return true;
//			ptr = p - 1;
//			str = s - 1;
//			break;
//		default:
//			if (*str != *ptr)
//			{
//				if (!start)return false;
//				s++;
//				str = s - 1;
//				ptr = p - 1;
//			}
//		}
//	}
//	while (*ptr == '*')ptr++;
//
//	return (*ptr == '\0');
//}
//int main()
//{
//
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		char p[1024] = { 0 };
//		for (size_t i = 0; i < s1.size(); i++)
//			p[i] = s1[i];
//		char s[1024] = { 0 };
//		for (size_t i = 0; i < s2.size(); i++)
//			s[i] = s2[i];
//		if (isMatc(p, s))
//			cout << "true" << endl;
//		else
//			cout << "false" << endl;
//	}
//	return 0;
//}