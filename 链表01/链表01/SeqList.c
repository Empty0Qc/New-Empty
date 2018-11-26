#include "SeqList.h"

// 内部接口
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

// 尾插，插入在顺序表的尾部
void SeqListPushBack(SeqListR *pSeq ,DataType data){
	assert(pSeq);
	pSeq->array[pSeq->size] = data;
	pSeq->size++;
}


 //头插，插入在顺序表的头部 ([0])
void SeqListPushFront(SeqListR *pSeq ,DataType data){
	assert(pSeq);
	for (i=pSeq->size; i>0; i--)
	{
		pSeq->array[i] = pSeq->array[i-1];
	}
	pSeq->array[0] = data;
	pSeq->size++;
}
// 尾删，删除顺序表尾部的数据
void SeqListPopBack(SeqListR *pSeq){
	assert(pSeq);
	pSeq->size--;
}
// 头删，删除顺序表头部的数据
void SeqListPopFront(SeqListR *pSeq){
	assert(pSeq);
	for (i=1; i<pSeq->size; i++)
	{
		pSeq->array[i-1] = pSeq->array[i];
	}
	pSeq->size--;
}

//打印
void SeqListPrint(const SeqListR *pSeq){
	assert(pSeq);
	for (i=0; i<pSeq->size; i++)
	{
		printf("%d ",pSeq->array[i]);
	}
	printf("\n顺序表一共有%d个元素!\n",pSeq->size);
}