#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#define ROW 4
#define COL 5

int find(int arr[][COL],int x)
{	
	int row = 0;
	int col = 4;
	assert(arr);
	
	if(x<arr[0][0] || x>arr[ROW-1][COL-1])
		return 0;
	while((row<=ROW-1)&&(col<=COL-1))
	{
		if(x>arr[row][col])
			row++;
		else if(x<arr[row][col])
			col--;
		else
			return 1;
	}
	return 0;
}
int main()
{
	int input = 0;
	int arr[4][5] = {{1, 2, 3, 4, 5 },
	                 {6, 7, 8, 9, 10},
	                 {11,12,13,14,15},
	                 {16,17,18,19,20}};	
	printf("请输入要查找的数>:");
	scanf("%d",&input);
	if(find(arr,input))
		printf("find_data\n");
	else
		printf("find_no_data\n");
	return 0;
}
// //1.调整数组使奇数全部都位于偶数前面。
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int len =sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right =len-1;
//	while(left<right)
//	{
//		while((!(arr[left]%2))&&(left<=right))
//		{
//			if((arr[right]%2)&&(left<=right))
//			{
//				int tmp = arr[left];
//				arr[left] = arr[right];
//				arr[right] = tmp;
//			}
//			right--;
//		}
//		left++;
//	}
//	left = 0;
//	while(len)
//	{
//		printf("%d ",arr[left]);
//		left++;
//		len--;
//	}
//	return 0;
//}