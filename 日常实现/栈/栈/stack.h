#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SDataType;

#define MAX_LEN (100)

typedef struct{
	SDataType array[MAX_LEN];
	int top; 
}Stack;
//��ʼ��ջ
void StackInit(Stack *stack);
//���ջ
void StackDestory(Stack *stack);
//ѹջ
void StackPush(Stack *stack,SDataType val);
//ɾ��ջ��Ԫ��
void StackPop(Stack *stack);
//����ջ��Ԫ��
SDataType StackTop(Stack *stack);
//�ж�ջ�Ƿ�Ϊ��
int StackEmpty(const Stack *stack);
//����ջ�����ݸ���
int StackSize(const Stack *stack);