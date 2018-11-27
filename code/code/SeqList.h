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

//��ʼ��&����
void SeqListInit(SeqList* sl, size_t capacity) ;
void SeqListDestroy(SeqList* sl) ;

//��ɾ���
//β��
void SeqListPushBack(SeqList* sl, SLDataType data) ;

//ͷ��
void SeqListPushFront(SeqList* sl, SLDataType data) ;

//βɾ
void SeqListPopBack(SeqList* sl) ;

//ͷɾ
void SeqListPopFront(SeqList* sl) ;

//��ӡ
void SeqListPrint(SeqList* sl) ;

//�ڲ��ӿ�
void CheckCapacity(SeqList* sl) ;