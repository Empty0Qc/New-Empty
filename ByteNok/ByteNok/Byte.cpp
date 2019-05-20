#include <iostream>
#include <vector>
using namespace std;

class A
{
public:
	void fun()
	{
		cout << "func()" << endl;
	}
};
class B : public A
{
public:
	void fun(int i)
	{
		A::fun();
		cout << "func(int i)->" << i << endl;
	}
};
void Test()
{
	B b;
	b.fun(10);
};

int main()
{
	Test();
	return 0;
}
//
//bool DoCheck(vector<int> &vv)
//{
//	if (vv.size() == 0)
//		return true;
//	int len = vv.size();
//	if ()
//	return false;
//}
//
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 13; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		v.push_back(tmp);
//	}
//	for (int i = 1; i < 10; i++)
//	{
//		if (DoCheck(v))
//			cout << i;
//	}
//	return 0;
//}


//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char s[1024] = {0};
//	int i = 0;
//	gets(s);
//	cout << "Hello,World." << endl;
//	cout << s;
//	return 0;
//}
