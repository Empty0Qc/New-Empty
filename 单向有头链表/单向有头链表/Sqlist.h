#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef int DataType;

typedef struct Node {
	DataType data;
	struct Node* next;
}Node;

typedef struct SList {
	Node *List_head;
}SList;

//初始化/销毁
void ListInit(SList *SqList);
void ListDestry(SList *SqList);
// Add Delete FInd Modify 

//在头添加数据项

void ListPushFront(SList *SqList, DataType data);

//申请新空间
Node *BuyListNode(DataType data);

//头删
void ListPopFront(SList *SqList);

//尾插
void ListPushBack(SList *SqList, DataType data);
//尾删
void ListPopBack(SList *SqList);

//查找
Node *ListFind(SList *SqList,DataType data);

//某节点后面插入
void ListInsertAfter(Node *pos,DataType n_data);
//某节点后面删除
void ListEarseAfter(Node *pos);
//删除链表中第一个遇到的节点
void ListRemove(SList *SqList, DataType r_data);
//打印
void ListPrint(SList *SqList);
