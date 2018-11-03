#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//4.模拟实现strcat 

void my_strcat(char *dst,const char *src)
{
	char *tmp = dst;
	assert(dst);
	assert(src);
	while(*tmp != '\0'){tmp++;}
	while(*src != '\0')
	{
		*tmp++ = *src++ ;
	}
	*tmp = '\0';
}

int main()
{
	char src[] = "efg";
	char dst[20] = "abcd";
	my_strcat(dst,src);
	printf("%s\n",dst);
	return 0;
}
//3.模拟实现strcpy 
//void my_strcpy(char *dst,const char *src)
//{
//	assert(dst);
//	assert(src);
//	while(*dst++ == *src++ && *src != '\0')
//	{
//		;
//	}
//}
//int main()
//{
//	char src[] = "def";
//	char dst[] = "abc";
//	my_strcpy(dst,src);
//	printf("%s",dst);
//	return 0;
//}

//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 
//给20元，可以多少汽水。 
//编程实现。

//2.0递归版
//int In_soda(int num)
//{ 
//	if(2 >= num)
//		return 1;
//	else
//		return num/2 + In_soda((num/2+num%2));
//}
//int main()
//{
//	printf("%d\n",20+In_soda(20));
//	return 0;
//}
//1.0普通版
//int In_soda(int num)
//{
//	int ret = num; 
//	while(num>1)
//	{
//		ret += num/2;
//		num = num/2 + num%2;
//	}
//	return ret;
//}
//int main()
//{
//	printf("%d\n",In_soda(20));
//	return 0;
//}

//1.一个数组中只有两个数字是出现一次， 
//其他所有数字都出现了两次。 
//找出这两个数字，编程实现。

//void find_num(int *arr,int len)
//{
//	int flag;
//	int i = 0,j = 0;
//	assert(arr);
//	for(i=0; i<len; i++)
//	{
//		flag = 1;
//		for(j=0; j<len; j++)
//		{
//			if(i == j)
//				j++;
//			else if(arr[i] == arr[j])
//				flag = 2;
//		}
//		if(1 == flag)
//		{
//			printf("%d ",arr[i]);
//		}
//	}
//	
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,5,4,3,2,1,7};
//	int len = sizeof(arr)/sizeof(arr[0]);
//	find_num(arr,len);
//	return 0;
//}