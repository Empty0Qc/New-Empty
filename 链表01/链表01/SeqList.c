#include "SeqList.h"


// �ڲ��ӿ�����
static void CheckCapacity(SeqListR *pSeq);

// �ڲ��ӿ�
void CheckCapacity(SeqListR *pSeq){
	int newcapacity;
	DataType *newArray;
	assert(pSeq);
	if (pSeq->size < pSeq->capacity)
		return;
	else{
		newcapacity = pSeq->capacity * 2;
		newArray = (DataType *)malloc(sizeof(DataType) * newcapacity);
		assert(newArray);
		for (i=0; i<pSeq->size; i++)
		{
			newArray[i] = pSeq->array[i];
		}
		free(pSeq->array);
		pSeq->array = newArray;
		pSeq->capacity = newcapacity;
	}
}

void SeqListInit(SeqListR *pSeq){
	assert(pSeq);
	pSeq->capacity = 10;
	pSeq->size = 0;
	pSeq->array = (DataType *)malloc(sizeof(DataType) * pSeq->capacity);
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
	CheckCapacity(pSeq);
	pSeq->array[pSeq->size] = data;
	pSeq->size++;
}


 //ͷ�壬������˳����ͷ�� ([0])
void SeqListPushFront(SeqListR *pSeq ,DataType data){
	assert(pSeq);
	CheckCapacity(pSeq);
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
//����Ԫ����ĳλ��
void SeqListInsert(SeqListR *pSeq ,int pos,DataType data){
	assert(pSeq);
	if (pos<0)
	{
		printf("����λ�ô��󣬷�����δ����!\n");
		return;
	}
	CheckCapacity(pSeq);
	for (i=pSeq->size; i>pos; i--)
	{
		pSeq->array[i] = pSeq->array[i-1];
	}
	pSeq->array[pos] = data;
	pSeq->size++;
}
//ɾ��ĳλ��Ԫ��
void SeqListErase(SeqListR* pSeq, int pos){
	assert(pSeq);
	if (pos<0)
	{
		printf("����λ�ô��󣬷�����δɾ��!\n");
		return;
	}
	for (i=pos; i<pSeq->size-1; i++)
	{
		pSeq->array[i] = pSeq->array[i+1];
	}
	pSeq->size--;
}

//ɾ��˳���������ĳԪ��
void SeqListRemove(SeqListR* pSeq, DataType r_data){
	int count = 0;
	assert(pSeq);
	while(-2 != (i=SeqListFind(pSeq,r_data,-1))){
		SeqListErase(pSeq,i);
		count++;
	}
	printf("���ι�ɾ����%d��Ԫ��!\n",count);
}
//����ĳԪ��λ�ò�����
int SeqListFind(SeqListR* pSeq, DataType f_data,int start)
{
	int j;
	assert(pSeq);
	for (j = start+1; j<pSeq->size; ++j)
	{
		if(f_data == pSeq->array[j])
			return j;
	}
	return -2;
}

//�޸�ĳ�±�δ֪��Ԫ��
void SeqListModify(SeqListR* pSeq, int pos, DataType m_data){
	assert(pSeq);
	if (pos<0 || pos >= pSeq->size)
	{
		printf("�����±�λ�ô���,�޲�������!\n");
		return;
	}
	pSeq->array[pos] = m_data;
}

static void swap(DataType *p, DataType *q){
	DataType tmp;
	assert((p != q )!= NULL);
	tmp = *p;
	*p = *q;
	*q =tmp;
}
//ð������
void SeqListBubbleSort(SeqListR* pSeq,int check){
	assert(pSeq);
	if (Bigfront == check)
	{
		for (m=0; m<pSeq->size-1; m++)
		{
			for (n=m+1; n<pSeq->size;n++)
			{
				if (pSeq->array[m] < pSeq->array[n])
				{
					swap(&pSeq->array[m],&pSeq->array[n]);
				}
			}
		}
	}
	else if (Smallfront == check)
	{
		for (m=0; m<pSeq->size-1; m++)
		{
			for (n=m+1; n<pSeq->size;n++)
			{
				if (pSeq->array[m] > pSeq->array[n])
				{
					swap(&pSeq->array[m],&pSeq->array[n]);
				}
			}
		}
	}
}

//���ֲ���(�����������Ҵ�С���������ǰ����)
int SeqListBinaryFind(SeqListR* pSeq, DataType f_data){
	assert(pSeq);
	m = 0;
	n = pSeq->size;
	i = (m+n)/2;
	while(m <= n){
		if(pSeq->array[i] > f_data){
			n = i-1;
			i = (m+n)/2;
		}
		else if(pSeq->array[i] < f_data){
			m = i+1;
			i = (m+n)/2;
		}
		else{
			return i;
		}
	}
	return -1;
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

// ����Ҫ��ʱ�临�Ӷȣ�O(N) �ռ临�Ӷ� O(1)
void SeqListRemoveAll(SeqListR* pSeq, DataType Rm_data){
	DataType *tmparray;
	assert(pSeq);
	//����1
#if 0 //ʱ�临�Ӷ� O(n`2)
	while((m = SeqListFind(pSeq,Rm_data) != -2)){
		SeqListErase(pSeq,m);
	}
#endif
	//����2
#if 0 //ʱ�临�Ӷ� O(n) �ռ临�Ӷ� O(n)
	tmparray = (DataType*)malloc(sizeof(DataType)*pSeq->size);
	assert(tmparray);
	m = 0;
	for(i=0; i<pSeq->size; i++){
		if (Rm_data != pSeq->array[i]){
			tmparray[m++] = pSeq->array[i];
		}
	}
	for(n=0; n<m; n++){
		pSeq->array[n] = tmparray[n];
	}
	free(tmparray);
	tmparray = NULL;
	pSeq->size = m;
#endif
	//����3
	//ʱ�临�Ӷȣ�O(N) �ռ临�Ӷ� O(1)
	n=0;
	for (m=0; m<pSeq->size; m++)
	{
		if (pSeq->array[m] != Rm_data){
			pSeq->array[n++] = pSeq->array[m];
		}
	}
	pSeq->size = n;
}