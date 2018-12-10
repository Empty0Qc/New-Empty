#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DLTypeData;

typedef struct Node{
	DLTypeData val;
	struct Node *next;
	struct Node *prev;
}Node;

typedef struct DLlist{
	Node *head;
}DLlist;

int i,j;
void DLlistInit(DLlist *list);
void DLlistDestory(DLlist *list);
void DLlistPushFront(DLlist *list,DLTypeData data);
void DLlistPopFront(DLlist *list);
void DLlistPushBack(DLlist *list,DLTypeData data);
void DLlistPopBack(DLlist *list);
Node* NodeFind(DLlist *list,DLTypeData val);
//删除所有val元素
void DLlistRemove(DLlist *list,DLTypeData val);
//在pos前插入数据
void DLlistInsert(DLlist *list,Node *pos,DLTypeData val);
//删除pos数据
void DLlistErase(DLlist *list,Node *pos);
void Print(DLlist *list);