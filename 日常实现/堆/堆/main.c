#include "Heap.h"



void Test(){
	int array[] = {
		3,9,1,7,5,8,14,13,2,6,9
	};
	int size = sizeof(array)/sizeof(int);
	CreatHeap(array,size);
	printf("½¨¶Ñ³É¹¦!\n");
}

int main(){
	Test();
	return 0;
}
