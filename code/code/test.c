#include "SeqList.h"

int main()
{
	SeqList sl;
	printf("��ʼ��:\n");
	SeqListInit(&sl,10);
	printf("β��:\n") ;
	SeqListPushBack(&sl, 1) ;
	SeqListPushBack(&sl, 2) ;
	SeqListPushBack(&sl, 3) ;
	SeqListPushBack(&sl, 4) ;
	SeqListPushBack(&sl, 5) ;
	SeqListPrint(&sl) ;
	printf("βɾ:\n") ;
	SeqListPopBack(&sl) ;
	SeqListPrint(&sl) ;
	printf("ͷ��: \n") ;
	SeqListPushFront(&sl,0) ;
	SeqListPrint(&sl) ;




	return 0 ;
}
