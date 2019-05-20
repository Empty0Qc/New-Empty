#include <iostream>
#include <assert.h>
using namespace std;


#if 1

char* _reverse_all(char* start, char* end)
{
	assert(start);
	assert(end);
	char* p = start;
	char tmp;
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
	return p;
}

char* _reverse(char *str)
{
	assert(str);
	char *pstr = str;
	char *start = str;
	char *end = str;
	while (*end != '\0')
	{
		while (*end != ' ' && *end != '\0')end++;
		end--;
		_reverse_all(start, end);
		start = end + 2;
		end = start;
	}
	return pstr;
}
int main()
{
	char s[10244] = {0};
	gets(s);
	_reverse_all(s, s + strlen(s) - 1);
	printf("%s\n",_reverse(s));
	return 0;
}
#endif
#if 0

#include <iostream>
using namespace std;

int main()
{
	int n, tmp, count = 0, prev = 0;
	bool x = true;
	cin >> n;
	while (n--)
	{
		cin >> tmp;
		if (x && tmp > prev)
		{
			x = false;
			count++;
		}
		else if (!x && tmp < prev)
		{
			x = true;
			count++;
		}
		prev = tmp;
	}
	cout << count;
	return 0;
}

#endif

//class A
//{
//public:
//	void fun()
//	{
//		cout << "func()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		A::fun();
//		cout << "func(int i)->" << i << endl;
//	}
//};
//void Test()
//{
//	B b;
//	b.fun(10);
//};
//
//int main()
//{
//	Test();
//	return 0;
//}
//

#if 0

int count(vector<int> &vvv,int x)
{

}
bool DoCheck(vector<int> &vv)
{
	if (vv.size() == 0)
		return true;
	int len = vv.size();
	int count0 = count(vv,vv.data);
	if (len % 3 != 0 && count0 >= 2)
	{

	}
	return false;
}

int main()
{
	vector<int> v;
	for (int i = 0; i < 13; i++)
	{
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	for (int i = 1; i < 10; i++)
	{
		if (DoCheck(v))
			cout << i;
	}
	return 0;
}

#endif
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
