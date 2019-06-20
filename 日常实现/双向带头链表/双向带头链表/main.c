#include "DLSq.h"

int main(){
	DLlist list;
//	Node *pos;
	DLlistInit(&list);
	DLlistPushFront(&list,1);
	DLlistPushFront(&list,2);
	DLlistPushFront(&list,3);
	DLlistPushFront(&list,4);
	DLlistPushFront(&list,2);
	DLlistPushFront(&list,3);
	DLlistPushFront(&list,4);
	DLlistPushFront(&list,2);
	DLlistPushFront(&list,3);
	DLlistPushFront(&list,4);
	DLlistRemove(&list,4);
	/*Print(&list);

	DLlistPopFront(&list);
	DLlistPopFront(&list);
	Print(&list);
	DLlistPushBack(&list,3);
	DLlistPushBack(&list,4);
	Print(&list);
	pos = NodeFind(&list,4);
	Print(&list);
	DLlistInsert(&list,pos,5);
	DLlistErase(&list,pos);
	Print(&list);*/
	//DLlistDestory(&list);
	Print(&list);

	return 0;
}
