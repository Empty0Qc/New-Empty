#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

 //1.调整数组使奇数全部都位于偶数前面。
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int len =sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right =len-1;
	while(left<right)
	{
		while((!(arr[left]%2))&&(left<=right))
		{
			if((arr[right]%2)&&(left<=right))
			{
				int tmp = arr[left];
				arr[left] = arr[right];
				arr[right] = tmp;
			}
			right--;
		}
		left++;
	}
	left = 0;
	while(len)
	{
		printf("%d ",arr[left]);
		left++;
		len--;
	}
	return 0;
}