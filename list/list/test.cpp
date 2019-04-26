//#include<iostream>
//using namespace std;
//
//#include"List.h"
//
//void test()
//{
//	List<int> l;
//	l.PushBack(1);
//	l.PushBack(2);
//	l.PushBack(3);
//	l.PushBack(4);
//
//	List<int>::iterator it = l.begin();
//	while (it != l.end())
//	{
//		*it = 99;
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}
//
//void PrintList(const List<int>& lt)
//{
//	List<int>::const_iterator it = lt.begin();
//	//auto it = lt.begin();
//	while (it != lt.end())
//	{
//		cout << *(it++) << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	List<int> l;
//	l.PushBack(1);
//	l.PushBack(2);
//	l.PushBack(3);
//	l.PushBack(4);
//	List<int> cp(l);
//	cp.Clear();
//	cp = l;
//	PrintList(cp);
//	cout << cp.Size() << endl;
//}
//int main()
//{
//	
//	//test();
//	test1();
//	system("pause");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1

//11位学号 二进制加密
#include<iostream>
using namespace std;
#include <cstdio>
#include <string>
int RightMove(int n, int x)
{
	unsigned char tmp;
	for (int i = 0; i < x % 8; i++)
	{
		tmp = n & '\x01';
		n >>= 1;
		n |= tmp << 7;
	}
	return n;
}
void switchBin(unsigned int n, char res[])
{
	for (int i = 7; i >= 0; i--)
	{
		res[i] = "01"[n % 2];
		n /= 2;
	}
}
int main()
{
	char src[20] = { 0 };
	char tmp[9] = { 0 };
	char res[200] = { 0 };
	int i, n, len;
	scanf("%19s", src);
	len = strlen(src);
	for (i = 1; i <= len; i++)
	{
		n = RightMove(src[i - 1] - '0', i);
		switchBin(n, tmp);
		strcat(res, tmp);
		strcat(res, " ");
	}
	puts(res);
	getchar();
	//system("pause");
	return 0;
}
