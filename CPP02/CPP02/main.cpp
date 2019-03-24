#include<iostream>
using namespace std;
#if 0
void shuffle(int* array,int size,int k)
{	
	if (k < 1)
		return;
	if (size % 2 == 0)
	{
		cout << "请输入偶数倍的牌数" << endl;
	}
	int* temp = (int*)malloc(sizeof(int)*(size+1));
	temp[0] = 0;
	int i = size; 
	int m = size/2;
	if ((i - size/2) > 0)
	{
	for (int j = 1; j < size; j+=2)
		{
			temp[j] = array[i];
			temp[j + 1] = array[m];
			i -= 1;
			m--;
		}
	}
	for (int i = 0; i <= size; i++){
		array[i] = temp[i];
	}
	k = k - 1;
	shuffle(array, size, k);
}
int main()
{
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8 };//此处0仅为占位数
	int size = sizeof(array) / sizeof(array[0]) - 1;
	int k;
	cout << "请输入要洗牌的次数：";
	cin >> k;
	shuffle(array,size,k);
	for (int i = 1; i <= size; i++){
		cout << array[i] << " ";
	}
	return 0;
}

#endif