#pragma once
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int SLDataType ;

typedef struct SeqList
{
	SLDataType *array ;
	int capacity ;
	int size ;
}SeqList ;

//初始化&销毁
void SeqListInit(SeqList* sl, size_t capacity) ;
void SeqListDestroy(SeqList* sl) ;

//增删查改
//尾插
void SeqListPushBack(SeqList* sl, SLDataType data) ;

//头插
void SeqListPushFront(SeqList* sl, SLDataType data) ;

//尾删
void SeqListPopBack(SeqList* sl) ;

//头删
void SeqListPopFront(SeqList* sl) ;

//打印
void SeqListPrint(SeqList* sl) ;

//内部接口
void CheckCapacity(SeqList* sl) ;