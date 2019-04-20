#include<iostream>
using namespace std;

#include"List.h"

void test()
{
	List<int> l;
	l.PushBack(1);
	l.PushBack(2);
	l.PushBack(3);
	l.PushBack(4);

	List<int>::iterator it = l.begin();
	while (it != l.end())
	{
		*it = 99;
		cout << *it << " ";
		++it;
	}
	cout << endl;
}

void PrintList(const List<int>& lt)
{
	List<int>::const_iterator it = lt.begin();
	//auto it = lt.begin();
	while (it != lt.end())
	{
		cout << *(it++) << " ";
	}
	cout << endl;
}

void test1()
{
	List<int> l;
	l.PushBack(1);
	l.PushBack(2);
	l.PushBack(3);
	l.PushBack(4);
	List<int> cp(l);
	cp.Clear();
	cp = l;
	PrintList(cp);
	cout << cp.Size() << endl;
}
int main()
{
	
	//test();
	test1();
	system("pause");
	return 0;
}