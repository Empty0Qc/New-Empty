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

#include <iostream>
using namespace std;

int main()
{
	/*union {
		int a;
		char b;
	}x;
	x.a = 1;
	if (x.b == 1) {
		cout << "little" << endl;
		cout << (int)x.b << endl;
	}
	else {
		cout << "big" << endl;
	}
	*/
	int a = 1;
	char* b = (char*)& a;
	cout << (int)* b << endl;
	system("pause");
	return 0;
}
