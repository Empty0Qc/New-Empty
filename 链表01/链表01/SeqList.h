#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define MAX_SIZE 100

enum{
	Bigfront = 1,
	Smallfront = 2
};
typedef int DataType;

typedef struct SeqList
{
	DataType *array;
	int capacity;
	int size;
}SeqListR;

int i,m,n;
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
//插入元素在某位置
void SeqListInsert(SeqListR *pSeq ,int pos,DataType data);
//删除某位置元素
void SeqListErase(SeqListR* pSeq, int pos);
//打印
void SeqListPrint(const SeqListR *pSeq);
//查找某元素位置并返回
int SeqListFind(SeqListR* pSeq, DataType f_data,int start);

//删除顺序表中所有某元素
void SeqListRemove(SeqListR* pSeq, DataType r_data);
//修改某下标未知的元素
void SeqListModify(SeqListR* pSeq, int pos, DataType m_data);

//冒泡排序
void SeqListBubbleSort(SeqListR* pSeq);

//二分查找
int SeqListBinaryFind(SeqListR* pSeq, DataType f_data);

// 本题要求：时间复杂度：O(N) 空间复杂度 O(1)
void SeqListRemoveAll(SeqListR* pSeq, DataType Rm_data);