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
//初始化栈
void StackInit(Stack *stack);
//清空栈
void StackDestory(Stack *stack);
//压栈
void StackPush(Stack *stack,SDataType val);
//删除栈顶元素
void StackPop(Stack *stack);
//返回栈顶元素
SDataType StackTop(Stack *stack);
//判断栈是否为空
int StackEmpty(const Stack *stack);
//返回栈内数据个数
int StackSize(const Stack *stack);