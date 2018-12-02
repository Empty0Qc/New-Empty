#include "SqList.h"


int main(){
	SList list;
	ListInit(&list);

	ListPushFront(&list,1);
	ListPushFront(&list,2);
	ListPushFront(&list,3);
	ListPushFront(&list,4);
	ListPrint(&list);
	ListPushBack(&list,0);
	ListPushBack(&list,1);
	ListPushBack(&list,2);
	ListPrint(&list);
	return 0;
}
