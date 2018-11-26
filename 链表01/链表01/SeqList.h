#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define MAX_SIZE 100
typedef int DataType;

typedef struct SeqList
{
	DataType *array;
	int capacity;
	int size;
}SeqListR;

int i;
//初始化，销毁
void SeqListInit(SeqListR *pSeq);
void SeqListDestry(SeqListR *pSeq);

// 增删改查
// 尾插，插入在顺序表的尾部
void SeqListPushBack(SeqListR *pSeq ,DataType data);
// 头插，插入在顺序表的头部 ([0])
void SeqListPushFront(SeqListR *pSeq ,DataType data);
// 尾删，删除顺序表尾部的数据
void SeqListPopBack(SeqListR *pSeq);
// 头删，删除顺序表头部的数据
void SeqListPopFront(SeqListR *pSeq);

//void SeqListInsert(SeqListR *pSeq ,DataType data);

//打印

void SeqListPrint(const SeqListR *pSeq);

// 内部接口
void CheckCapacity(SeqListR *pSeq);