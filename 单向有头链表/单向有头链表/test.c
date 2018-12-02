#include "Sqlist.h"


int main() {
	SList list;
	ListInit(&list);

	ListPushFront(&list, 1);
	ListPushFront(&list, 2);
	ListPushFront(&list, 3);
	ListPushFront(&list, 4);
	ListPushBack(&list,5);
	ListPrint(&list);
	ListPopBack(&list);
	ListPrint(&list);
	Node *f_node = ListFind(&list, 3);
	ListInsertAfter(f_node, 99);
	ListPrint(&list);
	f_node = ListFind(&list, 99);
	ListEarseAfter(f_node);
	ListRemove(&list,4);
	ListPrint(&list);
	ListDestry(&list);
	ListPrint(&list);
	system("pause");

	return 0;
}
