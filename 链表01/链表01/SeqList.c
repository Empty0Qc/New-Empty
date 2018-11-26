#include "SeqList.h"

// �ڲ��ӿ�
void CheckCapacity(SeqListR *pSeq){
	int newcapacity;
	SeqListR *new;
	assert(pSeq);
	if (pSeq->size < pSeq->capacity)
		return;
	else{
		newcapacity = pSeq->capacity * 2;
		new = (SeqListR *)malloc(sizeof(DataType) * newcapacity);
		for (i=0; i<pSeq->size; i++)
		{
			new->array[i] = pSeq->array[i];
		}
		free(pSeq->array);
		pSeq->array = new->array;
	}
}

void SeqListInit(SeqListR *pSeq){
	assert(pSeq);
	pSeq->capacity = 10;
	pSeq->size = 0;
	pSeq->array = (SeqListR *)malloc(sizeof(DataType) * pSeq->capacity);
}

void SeqListDestry(SeqListR *pSeq){
	assert(pSeq);
	pSeq->capacity = 0;
	pSeq->size = 0;
	free(pSeq->array);
	pSeq->array = NULL;
}

// β�壬������˳����β��
void SeqListPushBack(SeqListR *pSeq ,DataType data){
	assert(pSeq);
	pSeq->array[pSeq->size] = data;
	pSeq->size++;
}


 //ͷ�壬������˳����ͷ�� ([0])
void SeqListPushFront(SeqListR *pSeq ,DataType data){
	assert(pSeq);
	for (i=pSeq->size; i>0; i--)
	{
		pSeq->array[i] = pSeq->array[i-1];
	}
	pSeq->array[0] = data;
	pSeq->size++;
}
// βɾ��ɾ��˳���β��������
void SeqListPopBack(SeqListR *pSeq){
	assert(pSeq);
	pSeq->size--;
}
// ͷɾ��ɾ��˳���ͷ��������
void SeqListPopFront(SeqListR *pSeq){
	assert(pSeq);
	for (i=1; i<pSeq->size; i++)
	{
		pSeq->array[i-1] = pSeq->array[i];
	}
	pSeq->size--;
}

//��ӡ
void SeqListPrint(const SeqListR *pSeq){
	assert(pSeq);
	for (i=0; i<pSeq->size; i++)
	{
		printf("%d ",pSeq->array[i]);
	}
	printf("\n˳���һ����%d��Ԫ��!\n",pSeq->size);
}