#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef int DataType;

typedef struct Node{
	DataType data;
	struct Node* next;
}Node;

typedef struct SList{
	Node *List_head;
}SList;

//初始化/销毁
void ListInit(SList **SqList);
void ListDestry(SList *SqList);
// Add Delete FInd Modify 

//在头添加数据项

void ListPushFront(SList *SqList,DataType data);

//头删
void ListPopFront(SList *SqList);

//打印
void ListPrint(SList *SqList);
