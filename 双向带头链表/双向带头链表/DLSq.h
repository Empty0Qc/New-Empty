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
//ɾ������valԪ��
void DLlistRemove(DLlist *list,DLTypeData val);
//��posǰ��������
void DLlistInsert(DLlist *list,Node *pos,DLTypeData val);
//ɾ��pos����
void DLlistErase(DLlist *list,Node *pos);
void Print(DLlist *list);