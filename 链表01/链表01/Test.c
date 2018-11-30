#include "SeqList.h"

int main()
{
	int m = -1;
	SeqListR seqList;
	SeqListInit(&seqList);   //对链表初始化

	assert(seqList.size == 0);

	printf("尾插:\n");
	SeqListPushBack(&seqList,1);
	SeqListPushBack(&seqList,2);
	SeqListPushBack(&seqList,3);
	SeqListPushBack(&seqList,4);	
	SeqListPushBack(&seqList,5);
	SeqListPushBack(&seqList,6);
	SeqListPrint(&seqList);

	printf("头插:\n");
	SeqListPushFront(&seqList,0);
	SeqListPrint(&seqList);

	printf("头删:\n");
	SeqListPopFront(&seqList);
	SeqListPrint(&seqList);

	printf("尾删:\n");
	SeqListPopBack(&seqList);
	SeqListPrint(&seqList);

	printf("中间插入:\n");
	SeqListInsert(&seqList,2,5);
	SeqListPrint(&seqList);

	printf("中间删除:\n");
	SeqListErase(&seqList,4);
	SeqListPrint(&seqList);
	while( (m = SeqListFind(&seqList,5,m))!= -2)
	{
		i = 0;
		i++;
		printf("该元素在顺序表中第%d次出现在下标为%d的位置\n",i,m);
	}

	printf("删除顺序表中所有某元素:\n");
	SeqListRemove(&seqList,5);
	SeqListPrint(&seqList);

	printf("修改某下标未知的元素:\n");
	SeqListModify(&seqList,2,9);
	SeqListModify(&seqList,1,8);
	SeqListModify(&seqList,0,7);
	SeqListPrint(&seqList);
	printf("尾插:\n");
	SeqListPushBack(&seqList,1);
	SeqListPushBack(&seqList,2);
	SeqListPushBack(&seqList,3);
	SeqListPushBack(&seqList,4);	
	SeqListPushBack(&seqList,5);
	SeqListPushBack(&seqList,6);
	SeqListPrint(&seqList);

	printf("冒泡排序:\n");
	printf("请选择: 1.Bigfront 2.Smallfornt:\n");
	scanf("%d",&i);
	switch (i)
	{
	case Bigfront:
		SeqListBubbleSort(&seqList,Bigfront);
		break;
	case Smallfront:
		SeqListBubbleSort(&seqList,Smallfront);
		break;
	default:
		printf("输入错误,无操作返回!\n");
	}
	SeqListPrint(&seqList);

	printf("该元素所在的下标为%d\n",SeqListBinaryFind(&seqList,4));
	printf("尾插:\n");
	SeqListPushBack(&seqList,1);
	SeqListPushBack(&seqList,2);
	SeqListPushBack(&seqList,3);
	SeqListPushBack(&seqList,4);
	SeqListPrint(&seqList);
	printf("删除某元素所有下标的值:\n");
	SeqListRemoveAll(&seqList,4);
	SeqListPrint(&seqList);
	return 0;
}