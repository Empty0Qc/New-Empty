#include<stdio.h>
#include<stdlib.h>



#if 0
//��������
//ʱ�临�Ӷȣ�
//���O(n)(�Ѿ�����)|ƽ��O(n^2)|�O(n^2)(�Ѿ����򣬵���)
//�ռ临�Ӷ�O(1)
//�ȶ���:�ȶ���array[j] == key ����ѭ�����ͱ�֤���ȶ���
//��n�Ƚ�С��ʱ�� ���ߴ��������������
void InsertSort(int array[], int size){
	//�����Ż�Ϊ
	// for(int i = 1; i < size; i++)
	for (int i = 0; i < size; i++){
		//array[]����Ҫ���������
		//��[0,i)���Ѿ����������
		//ѭ���Ĺ��� j ~ [i-1,0]���κ�key�Ƚ�
		// 1.array[j] <= key      break
		// 2.array[j] >  key      array[j+1] = array[j]
		//ѭ����������array[j+1] = key
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
//ϣ������
//ʱ�临�Ӷ�
//���O(n) | ƽ��O(n ^ 1.3) | �O(n ^ 2)
//�ռ临�Ӷ�O(1)
//�ȶ���:���ȶ� (��ͬ������û����֤��һ������)
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
	//�Ż�:for(int i = gap; i < size; i++)
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
//ֱ��ѡ������
//ʱ�临�Ӷ�
//���|ƽ��|��� O(n^2)  (������)
//�ռ临�Ӷ�O(1)
//�ȶ���: ���ȶ�			{7,8,3a��5,3b} �����޷���֤3a ����3bǰ

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
//������
//ʱ�临�Ӷ�
//���|ƽ��|�  O(n*logn)(������)
//�ռ临�Ӷ�O(1)
//�ȶ��ԣ����ȶ�   �ѵĹ�����û���������Һ���
//�����
void Swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
}
//���µ���
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
//����
void CreatHeap(int array[], int size){
	for (int i = (size - 2) / 2; i >= 0; i--){
		AdjustDown(array, size, i);
	}
}
//����

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
//ð������
//ʱ�临�Ӷ�
//��� O(n)(�Ѿ�����)|ƽ��|�O(n^2)
//�ռ临�Ӷ�O(1)
//�ȶ��ԣ��ȶ�
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
//��������

//hover
int Partition_1(int array[], int left, int right){
	int begin = left;//bigin����дΪ0
	int end = right;//right������ right - 1,����{1,2,3,4}
	while (begin < end){
		//��׼ֵ���ұߣ��������
		//������{1,7,8,4}
		while (begin < end && array[begin] <= array[right]) begin++;
		while (begin < end && array[end] >= array[right]) end--;
		Swap(array + begin, array + end);
	}
	Swap(array + begin, array + right);
	return right;
}

//�ڿӷ�
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
		//����һ����
		return;
	}
	if (left > right){
		//����û����
		return;
	}
	//��׼ֵ��array[right]
	int div;   //�����������ջ�׼ֵ���±�
	div = Partition_1(array, left, right);
	//����array[left,right]
	//��С�ķ��󣬴�ķ���
	//��������׼ֵ���ڵ��±�

	//���䱻�ֳ�
	//[left,div-1] �Ȼ�׼ֵС *
	//[div,div]		��׼ֵ		�Ѿ�������λ��
	//[div+1,right]�Ȼ�׼ֵ�� *

	_QuickSort(array, left, div - 1);
	_QuickSort(array, div + 1, right);
}

void QuickSort(int array[], int size){
	_QuickSort(array,0,size-1);
}

#endif