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
//	//auto �ǻ��ڷ�Χ��for
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
//	cout << "swap(l1,l2)ʱ�����ģ�" << end1 - begin1 << endl;
//	cout << "l1swap(l2)ʱ�����ģ�" << end2 - begin2 << endl;
//	//list ֮���޲����Ϊ��ר�ŵĴ���
//}
//
////
//void test2()
//{
//	list<int> l1;
//	l1.resize(10);
//	//�˴�1���ܳ�ʼ��δ��ʼ��������
//	l1.resize(20, 1);
//	l1.clear();
//	l1.push_back(999);
//	printList(l1);
//
//	//  l1.remove(eit) �ҵ���ɾ���Ҳ���ɶ��û����
//	//splice ��� 
//	// l1.splice(pos,l2) ��l2�����ݽ�ϵ�l1�l2�ͱ�ɿ���
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
//	////�˴�����û��if�жϣ���find��������û�ҵ�Ŀ��ʱ����Ὣ�������嵽�����������һ��
//	//if (pos != l3.end())
//	//	l3.insert(pos, 7);
//
//	////posָ���ʱ��Ȼ��Ч���ɸ���ֵ
//	//*pos = 999;
//	//l3.erase(pos);
//	////erase������νڵ�
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
//	//		//erase ɾ��eit�ڵ��᷵�ؽ����ŵ���һ��
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