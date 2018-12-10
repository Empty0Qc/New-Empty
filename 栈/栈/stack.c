#include "stack.h"

void StackInit(Stack *stack){
	assert(stack);
	stack->top = 0;
}

void StackDestory(Stack *stack){
	assert(stack);
	stack->top = 0;
}

void StackPush(Stack *stack,SDataType val){
	assert(stack);
	assert(stack->top < MAX_LEN);
	stack->array[stack->top] = val;
	stack->top++;
}

void StackPop(Stack *stack){
	assert(stack);
	assert(stack->top > 0);
	stack->top--;
}

//����ջ��Ԫ��
SDataType StackTop(Stack *stack){
	assert(stack);
	assert(stack->top > 0);
	
	return stack->array[stack->top-1];
}
//�ж�ջ�Ƿ�Ϊ��
int StackEmpty(const Stack *stack){
	assert(stack);
	return stack->top == 0 ? 1:0;
	//if (stack->top == 0){
	//	return -1;
	//}
	//else
	//	return 1;
}
//����ջ�����ݸ���
int StackSize(const Stack *stack){
	assert(stack);
	return stack->top;
}