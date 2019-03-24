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

//��ʼ��/����
void ListInit(SList *SqList);
void ListDestry(SList *SqList);
// Add Delete FInd Modify 

//��ͷ����������

void ListPushFront(SList *SqList,DataType data);

//�����¿ռ�
Node *BuyListNode(DataType data);

//ͷɾ
void ListPopFront(SList *SqList);

//β��
void ListPushBack(SList *SqList,DataType data);
//βɾ
void ListPopBack(SList *SqList);

//��ӡ
void ListPrint(SList *SqList);