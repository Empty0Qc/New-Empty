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
//��ʼ��������
void SeqListInit(SeqListR *pSeq);
void SeqListDestry(SeqListR *pSeq);

// ��ɾ�Ĳ�
// β�壬������˳����β��
void SeqListPushBack(SeqListR *pSeq ,DataType data);
// ͷ�壬������˳����ͷ�� ([0])
void SeqListPushFront(SeqListR *pSeq ,DataType data);
// βɾ��ɾ��˳���β��������
void SeqListPopBack(SeqListR *pSeq);
// ͷɾ��ɾ��˳���ͷ��������
void SeqListPopFront(SeqListR *pSeq);

//void SeqListInsert(SeqListR *pSeq ,DataType data);

//��ӡ

void SeqListPrint(const SeqListR *pSeq);

// �ڲ��ӿ�
void CheckCapacity(SeqListR *pSeq);