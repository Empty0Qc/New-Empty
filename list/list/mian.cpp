//#include<list>
//#include<iostream>
//#include<ctime>
//using namespace std;
//
//template<class T>
//void printList(const list<T>& lt)
//{
//	for (const auto& e : lt)
//	{
//	cout << e << " ";
//	}
//	cout << endl;
//}
//
//template<class T>
//void printListIterator(const list<T>& lt)
//{
//	//auto 是基于范围的for
//	auto lit = lt.rbegin();
//	while (lit != lt.rend())
//	{
//		cout << *(lit++) << " ";
//	}
//	cout << endl;
//}
//
////swap()
//void test1()
//{
//	list<int> l1(10000000, 4);
//	list<int> l2(10000000, 2);
//	size_t begin1 = clock();
//	swap(l1, l2);
//	size_t end1 = clock();
//
//	size_t begin2 = clock();
//	l1.swap(l2);
//	size_t end2 = clock();
//	cout << "swap(l1,l2)时间消耗：" << end1 - begin1 << endl;
//	cout << "l1swap(l2)时间消耗：" << end2 - begin2 << endl;
//	//list 之中无差别，以为有专门的处理
//}
//
////
//void test2()
//{
//	list<int> l1;
//	l1.resize(10);
//	//此处1仅能初始化未初始化的内容
//	l1.resize(20, 1);
//	l1.clear();
//	l1.push_back(999);
//	printList(l1);
//
//	//  l1.remove(eit) 找到就删，找不到啥都没发生
//	//splice 结合 
//	// l1.splice(pos,l2) 把l2的内容结合到l1里，l2就变成空了
//}
//int main()
//{
//	//list<int> l;
//	//list<int> l2(10, 8);
//	//int arr[] = { 1, 2, 3, 4, 5 };
//	//list<int> l3(arr, arr + sizeof(arr) / sizeof(arr[0]));
//	//list<int> l4(l3.begin(),l3.end());
//	//list<int> cpy(l3);
//	//list<int>::iterator cp = cpy.begin();
//
//
//	//l2.insert(l2.end(), 9);
//
//	//auto pos = find(l3.begin(), l3.end(),2);
//	////此处若是没有if判断，若find在链表中没找到目标时，则会将插入数插到链表正序最否一个
//	//if (pos != l3.end())
//	//	l3.insert(pos, 7);
//
//	////pos指向此时仍然有效，可更改值
//	//*pos = 999;
//	//l3.erase(pos);
//	////erase即清掉次节点
//	////*pos = 66;
//	//
//	//while (cp != cpy.end())
//	//{
//	//	cout << *(cp++) << " ";
//	//}
//	//cout << endl;
//
//	////for (const auto& e : l2)
//	////{
//	////	cout << e << " ";
//	////}
//	////cout << endl;
//
//	//auto eit = l2.begin();
//	//while (eit != l2.end())
//	//{
//	//	if (*eit % 2 == 0)
//	//	{
//	//		eit = l2.erase(eit);
//	//		//erase 删除eit节点后会返回紧跟着的下一个
//	//	}
//	//	else
//	//		++eit;
//	//}
//	//printListIterator(l);
//	//printListIterator(l2);
//	//printListIterator(l3);
//	//printList(cpy);
//	test2();
//	system("pause");
//	return 0;
//}