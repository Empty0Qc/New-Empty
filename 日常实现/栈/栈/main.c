#include "stack.h"

int main(){
	int i;
	Stack stack;
	StackInit(&stack);
	StackPush(&stack,1);
	StackPush(&stack,2);
	StackPush(&stack,3);
	StackPush(&stack,4);
	if(i = StackEmpty(&stack)==1){
		printf("��Ϊ��!\n");
	}
	printf("ջ��Ԫ��%d\n",StackTop(&stack));
	printf("ջ��Ԫ�ظ���Ϊ%d\n",StackSize(&stack));
	return 0;
}