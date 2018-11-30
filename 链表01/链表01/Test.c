#include "SeqList.h"

int main()
{
	int m = -1;
	SeqListR seqList;
	SeqListInit(&seqList);   //�������ʼ��

	assert(seqList.size == 0);

	printf("β��:\n");
	SeqListPushBack(&seqList,1);
	SeqListPushBack(&seqList,2);
	SeqListPushBack(&seqList,3);
	SeqListPushBack(&seqList,4);	
	SeqListPushBack(&seqList,5);
	SeqListPushBack(&seqList,6);
	SeqListPrint(&seqList);

	printf("ͷ��:\n");
	SeqListPushFront(&seqList,0);
	SeqListPrint(&seqList);

	printf("ͷɾ:\n");
	SeqListPopFront(&seqList);
	SeqListPrint(&seqList);

	printf("βɾ:\n");
	SeqListPopBack(&seqList);
	SeqListPrint(&seqList);

	printf("�м����:\n");
	SeqListInsert(&seqList,2,5);
	SeqListPrint(&seqList);

	printf("�м�ɾ��:\n");
	SeqListErase(&seqList,4);
	SeqListPrint(&seqList);
	while( (m = SeqListFind(&seqList,5,m))!= -2)
	{
		i = 0;
		i++;
		printf("��Ԫ����˳����е�%d�γ������±�Ϊ%d��λ��\n",i,m);
	}

	printf("ɾ��˳���������ĳԪ��:\n");
	SeqListRemove(&seqList,5);
	SeqListPrint(&seqList);

	printf("�޸�ĳ�±�δ֪��Ԫ��:\n");
	SeqListModify(&seqList,2,9);
	SeqListModify(&seqList,1,8);
	SeqListModify(&seqList,0,7);
	SeqListPrint(&seqList);
	printf("β��:\n");
	SeqListPushBack(&seqList,1);
	SeqListPushBack(&seqList,2);
	SeqListPushBack(&seqList,3);
	SeqListPushBack(&seqList,4);	
	SeqListPushBack(&seqList,5);
	SeqListPushBack(&seqList,6);
	SeqListPrint(&seqList);

	printf("ð������:\n");
	printf("��ѡ��: 1.Bigfront 2.Smallfornt:\n");
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
		printf("�������,�޲�������!\n");
	}
	SeqListPrint(&seqList);

	printf("��Ԫ�����ڵ��±�Ϊ%d\n",SeqListBinaryFind(&seqList,4));
	printf("β��:\n");
	SeqListPushBack(&seqList,1);
	SeqListPushBack(&seqList,2);
	SeqListPushBack(&seqList,3);
	SeqListPushBack(&seqList,4);
	SeqListPrint(&seqList);
	printf("ɾ��ĳԪ�������±��ֵ:\n");
	SeqListRemoveAll(&seqList,4);
	SeqListPrint(&seqList);
	return 0;
}