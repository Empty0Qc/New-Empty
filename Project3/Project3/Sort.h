#include<stdio.h>
#include<stdlib.h>



#if 0
//插入排序
//时间复杂度：
//最好O(n)(已经有序)|平均O(n^2)|最坏O(n^2)(已经有序，倒序)
//空间复杂度O(1)
//稳定性:稳定，array[j] == key 跳出循环，就保证了稳定性
//在n比较小的时候 或者大概率是有序的情况
void InsertSort(int array[], int size){
	//可以优化为
	// for(int i = 1; i < size; i++)
	for (int i = 0; i < size; i++){
		//array[]就是要插入的数据
		//从[0,i)是已经有序的区间
		//循环的过程 j ~ [i-1,0]依次和key比较
		// 1.array[j] <= key      break
		// 2.array[j] >  key      array[j+1] = array[j]
		//循环结束后，让array[j+1] = key
		int key = array[i];
		int j;
		for (j = i - 1; j >= 0 && array[j] > key; j--){
			array[j + 1] = array[j];
		}
		array[j + 1] = key;
	}
}


#endif
#if 0
//希尔排序
//时间复杂度
//最好O(n) | 平均O(n ^ 1.3) | 最坏O(n ^ 2)
//空间复杂度O(1)
//稳定性:不稳定 (相同的数，没法保证在一个分组)
void ShellSort(int array[], int size){
	int gap = size;
	while (1)
	{
		gap = (gap / 3) + 1;
		InsertSortWithGap(array, size, gap);
		if (gap == 1){
			break;
		}
	}
}

void InsertSortWithGap(int array[], int size, int gap){
	//优化:for(int i = gap; i < size; i++)
	for (int i = 0; i < size; i++){
		int key = array[i];
		int j;
		for (j = i - gap; j >= 0 && array[j]> key; j -= gap){
			array[j + gap] = array[j];
		}
		array[j + gap] = key;
	}
}
#endif

#if 0
//直接选择排序
//时间复杂度
//最好|平均|最差 O(n^2)  (不敏感)
//空间复杂度O(1)
//稳定性: 不稳定			{7,8,3a，5,3b} 交换无法保证3a 还在3b前

void Swap(int *a, int *b){
	int t = *a; *a = *b; *b = t;
}
void SelectSort(int array[],int size){
	for (int i = 0; i < size; i++){
		int m = 0;
		for (int j = 0; j < size - i; j++){
			if (array[j] > array[m]){
				m = j;
			}
		}
		Swap(array + m, array + size - i - 1);
	}
}


#endif

#if 1 
//堆排序
//时间复杂度
//最好|平均|最坏  O(n*logn)(不敏感)
//空间复杂度O(1)
//稳定性：不稳定   堆的过程中没法控制左右孩子
//建大堆
void Swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
}
//向下调整
void AdjustDown(int array[], int size, int r){
	int left = 2 * r + 1;
	int right = 2 * r + 2;
	if (left >= size){
		return;
	}
	int m = left;
	if (right < size && array[right] > array[left]){
		m = right;
	}
	if (array[r] >= array[m]){
		return;
	}
	Swap(array + r, array + m);
	AdjustDown(array, size, m);
}
//建堆
void CreatHeap(int array[], int size){
	for (int i = (size - 2) / 2; i >= 0; i--){
		AdjustDown(array, size, i);
	}
}
//排序

void HeapSort(int array[], int size){
	CreatHeap(array, size);
	for (int i = 0; i < size; i++){
		Swap(array, array + size - i - 1);
		AdjustDown(array, size - i - 1, 0);
	}
}
int main(){
	int array[] = { 3, 1, 4, 5, 2, 6, 7, 8, 9 };
	int size = sizeof(array) / sizeof(int);
	HeapSort(array, size);
	for (int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}
#endif

#if 1
//冒泡排序
//时间复杂度
//最好 O(n)(已经有序)|平均|最坏O(n^2)
//空间复杂度O(1)
//稳定性：稳定
void Swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
}
void BubbleSort(int array[], int size){
	for (int i = 0; i < size; i++){
		int sorted = 1;
		for (int j = 0; j < size - i - 1; j++){
			if (array[j]>array[j + 1]){
				Swap(array + j, array + j + 1);
				sorted = 0;
			}
		}
		if (sorted == 1){ 
			break; 
		}
	}
}
#endif


#if 1
//快速排序

//hover
int Partition_1(int array[], int left, int right){
	int begin = left;//bigin不可写为0
	int end = right;//right不能是 right - 1,反例{1,2,3,4}
	while (begin < end){
		//基准值在右边，先走左边
		//否则反例{1,7,8,4}
		while (begin < end && array[begin] <= array[right]) begin++;
		while (begin < end && array[end] >= array[right]) end--;
		Swap(array + begin, array + end);
	}
	Swap(array + begin, array + right);
	return right;
}

//挖坑法
int Partition_2(int array[], int left, int right){
	int begin = left;
	int end = right-1;
	int pivot = array[right];
	while (begin < end){
		while (begin < end && array[begin] < array[right]) begin++;
		array[end] = array[begin];
		while (begin < end && array[end] < array[right]) end--;
		array[begin] = array[end];
	}
	array[begin] = pivot;
	return begin;
}

int Partition_3(int array[], int left, int right){
	int d = left;
	for (int i = left; i < right; i++){
		if (array[i] < array[right]){
			Swap(array + i, array + d);
			d++;
		}
	}
	Swap(array + d, array + right);
	return d;
}
void _QuickSort(int array[], int left, int right){
	if (left == right){
		//区间一个数
		return;
	}
	if (left > right){
		//区间没有数
		return;
	}
	//基准值是array[right]
	int div;   //用来保存最终基准值的下标
	div = Partition_1(array, left, right);
	//遍历array[left,right]
	//把小的放左，大的放右
	//返回最后基准值所在的下标

	//区间被分成
	//[left,div-1] 比基准值小 *
	//[div,div]		基准值		已经在最终位置
	//[div+1,right]比基准值大 *

	_QuickSort(array, left, div - 1);
	_QuickSort(array, div + 1, right);
}

void QuickSort(int array[], int size){
	_QuickSort(array,0,size-1);
}

#endif