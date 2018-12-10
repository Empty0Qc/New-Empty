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
		printf("不为空!\n");
	}
	printf("栈顶元素%d\n",StackTop(&stack));
	printf("栈内元素个数为%d\n",StackSize(&stack));
	return 0;
}