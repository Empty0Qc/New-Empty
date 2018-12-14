#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_Capacity 1000
typedef int HPDataType;

int i;
typedef struct Heap{
	HPDataType *array;
	int size;
	int capacity;
}Heap;

void AdjustUp(int array[],int size,int child){
	while (child != 0)
	{
		int parent = (child - 1)/2;
		if (array[child] >= array[parent])
		{
			return;
		}
		i = array[parent];
		array[parent] = array[child];
		array[child] = i;

		child = parent;
	}
}
//向下调整
void AdjustDown(int array[],int size,int root){
	int left  = 2*root + 1;
	int right = 2*root + 2;
	int min,t;
	if(left >= size){
		//越界
		return;
	}

	if(right < size && array[right] < array[left]){
		min = right;
	}
	else{
		min = left;
	}
	if (array[root] <= array[min])
	{
		return;
	}

	t = array[root];
	array[root] = array[min];
	array[min] = t;

	AdjustDown(array,size,min);
}

//建堆
void CreatHeap(int array[],int size){
	for (i = (size-2)/2;i>=0;i--)
	{
		AdjustDown(array,size,i);
	}
}

void HeapCreateHeap(Heap *heap, int array, int size){
	heap->capacity = MAX_Capacity;
	heap->size = size;
	heap->array = (int *)malloc(sizeof(int) * size);
	for(i=0; i<size; i++){
		heap->array[i] = array[i];
	}

	CreatHeap(heap->array,heap->size);
}

HPDataType HeapTop(Heap *heap){
	assert(heap->size > 0);

	return heap->array[0];
}

void HeapPop(Heap *heap){
	assert(heap->size > 0);

	heap->array[0] = heap->array[heap->size - 1];
	heap->size--;

	AdjustDown(heap->array,heap->size,0);
}