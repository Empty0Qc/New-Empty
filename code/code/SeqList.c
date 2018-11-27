#include "SeqList.h"




//初始化
void SeqListInit(SeqList* sl, size_t capacity) 
{
	sl->capacity = capacity ;
	sl->size = 0 ;
	sl->array = (SLDataType *) malloc (capacity * sizeof(SLDataType)) ;
	assert(sl->array != NULL) ;
	printf("初始化成功！元素个数为%d\n",sl->size) ;
}

//销毁
void SeqListDestroy(SeqList* sl) 
{
	assert(sl != NULL) ;
	free(sl->array) ;
	sl->array = NULL ; //防御性代码
	sl->capacity = sl->size = 0 ;
	printf("销毁成功！元素个数为%d\n",sl->size) ;
}

//尾插
void SeqListPushBack(SeqList* sl, SLDataType data) 
{
	assert(sl != NULL) ;
	CheckCapacity(sl) ;
	sl->array[sl->size] = data ;
	sl->size++ ;
	printf("尾插成功！元素个数为%d\n",sl->size) ;
}

//尾删
void SeqListPopBack(SeqList* sl)
{
	assert(sl != NULL) ;
	if(sl->size == 0)
		printf("此表本为空，无法删除!\n");
	else
	{
		sl->size-- ;
		printf("尾删成功！元素个数为%d\n",sl->size);
	}
}

//头插
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
	printf("头插成功！元素个数为%d\n",sl->size) ;
}

//打印
void SeqListPrint(SeqList* sl)
{
	int i = 0 ;
	for(i=0; i<sl->size; i++)
	{
		printf("%d ", sl->array[i]) ;
	}
	printf("打印成功！元素个数为%d\n",sl->size) ;
}

//内部接口
void CheckCapacity(SeqList* sl) 
{
	int i = 0 ;
	//申请空间
	int newCapacity = sl->capacity * 2 ;
	SLDataType  *newArray = (SLDataType*) malloc (newCapacity * sizeof(SLDataType)) ;
	assert(newArray);
	//搬运
	//int i = 0 ;
	for(i=0; i<sl->size; i++)
	{
		newArray[i] = sl->array[i] ;
	}
	//释放旧的空间
	free(sl->array) ;
	//再保存新的
	sl->array = newArray ;
	sl->capacity = newCapacity ;
}