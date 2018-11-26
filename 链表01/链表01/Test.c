#include "SeqList.h"

void main()
{
	SeqListR seqList;
	SeqListInit(&seqList);   //对链表初始化

	assert(seqList.size == 0);

	SeqListPushBack(&seqList,1);
	SeqListPushBack(&seqList,2);
	SeqListPushBack(&seqList,3);
	SeqListPushBack(&seqList,4);	
	SeqListPushBack(&seqList,5);
	SeqListPushBack(&seqList,6);
	SeqListPushBack(&seqList,7);
	SeqListPushBack(&seqList,8);
	SeqListPushBack(&seqList,5);
	SeqListPushBack(&seqList,6);
	SeqListPushBack(&seqList,7);
	SeqListPushBack(&seqList,8);

	SeqListPrint(&seqList);
	SeqListPushFront(&seqList,0);
	SeqListPrint(&seqList);
	SeqListPopFront(&seqList);
	SeqListPrint(&seqList);
	SeqListPopBack(&seqList);
	SeqListPrint(&seqList);
	return 0;
}