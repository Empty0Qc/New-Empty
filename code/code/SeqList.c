#include "SeqList.h"




//��ʼ��
void SeqListInit(SeqList* sl, size_t capacity) 
{
	sl->capacity = capacity ;
	sl->size = 0 ;
	sl->array = (SLDataType *) malloc (capacity * sizeof(SLDataType)) ;
	assert(sl->array != NULL) ;
	printf("��ʼ���ɹ���Ԫ�ظ���Ϊ%d\n",sl->size) ;
}

//����
void SeqListDestroy(SeqList* sl) 
{
	assert(sl != NULL) ;
	free(sl->array) ;
	sl->array = NULL ; //�����Դ���
	sl->capacity = sl->size = 0 ;
	printf("���ٳɹ���Ԫ�ظ���Ϊ%d\n",sl->size) ;
}

//β��
void SeqListPushBack(SeqList* sl, SLDataType data) 
{
	assert(sl != NULL) ;
	CheckCapacity(sl) ;
	sl->array[sl->size] = data ;
	sl->size++ ;
	printf("β��ɹ���Ԫ�ظ���Ϊ%d\n",sl->size) ;
}

//βɾ
void SeqListPopBack(SeqList* sl)
{
	assert(sl != NULL) ;
	if(sl->size == 0)
		printf("�˱�Ϊ�գ��޷�ɾ��!\n");
	else
	{
		sl->size-- ;
		printf("βɾ�ɹ���Ԫ�ظ���Ϊ%d\n",sl->size);
	}
}

//ͷ��
void SeqListPushFront(SeqList* sl, SLDataType data)
{
	int i = 0 ;
	assert(sl != NULL) ;
	CheckCapacity(sl) ;
	for(i=sl->size-1; i>=0; i--)
	{
		sl->array[i+1] = sl->array[i] ;
	}
	sl->array[0] = data ;
	sl->size++ ;
	printf("ͷ��ɹ���Ԫ�ظ���Ϊ%d\n",sl->size) ;
}

//��ӡ
void SeqListPrint(SeqList* sl)
{
	int i = 0 ;
	for(i=0; i<sl->size; i++)
	{
		printf("%d ", sl->array[i]) ;
	}
	printf("��ӡ�ɹ���Ԫ�ظ���Ϊ%d\n",sl->size) ;
}

//�ڲ��ӿ�
void CheckCapacity(SeqList* sl) 
{
	int i = 0 ;
	//����ռ�
	int newCapacity = sl->capacity * 2 ;
	SLDataType  *newArray = (SLDataType*) malloc (newCapacity * sizeof(SLDataType)) ;
	assert(newArray);
	//����
	//int i = 0 ;
	for(i=0; i<sl->size; i++)
	{
		newArray[i] = sl->array[i] ;
	}
	//�ͷžɵĿռ�
	free(sl->array) ;
	//�ٱ����µ�
	sl->array = newArray ;
	sl->capacity = newCapacity ;
}