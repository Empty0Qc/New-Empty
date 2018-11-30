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
//����Ԫ����ĳλ��
void SeqListInsert(SeqListR *pSeq ,int pos,DataType data);
//ɾ��ĳλ��Ԫ��
void SeqListErase(SeqListR* pSeq, int pos);
//��ӡ
void SeqListPrint(const SeqListR *pSeq);
//����ĳԪ��λ�ò�����
int SeqListFind(SeqListR* pSeq, DataType f_data,int start);

//ɾ��˳���������ĳԪ��
void SeqListRemove(SeqListR* pSeq, DataType r_data);
//�޸�ĳ�±�δ֪��Ԫ��
void SeqListModify(SeqListR* pSeq, int pos, DataType m_data);

//ð������
void SeqListBubbleSort(SeqListR* pSeq);

//���ֲ���
int SeqListBinaryFind(SeqListR* pSeq, DataType f_data);

// ����Ҫ��ʱ�临�Ӷȣ�O(N) �ռ临�Ӷ� O(1)
void SeqListRemoveAll(SeqListR* pSeq, DataType Rm_data);