#include <stdio.h>
#include<string.h>

#include "SqList.h"

int main(){
	SList list;
	ListInit(&list);

	ListPushFront(&list,1);
	ListPushFront(&list,2);
	ListPushFront(&list,3);
	ListPushFront(&list,4);
	ListPrint(&list);
	return 0;
}
