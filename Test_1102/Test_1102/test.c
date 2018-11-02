#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <string.h>


//void reverse(char *left, char *right)
//{
//	assert(left);
//	assert(right);
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void T_reverse(char *str)
//{
//	
//	char *tmp = str;
//	char *left  = str;
//	char *right = str + strlen(str)-1;
//	assert(str);
//	reverse(left,right);
//	while(*tmp)
//	{
//		char *left = tmp;
//		while((*tmp != ' ')&&(*tmp != '\0'))
//		{
//			tmp++;
//		}
//		reverse(left,tmp-1);
//		if(*tmp == ' ')
//		{
//			tmp++;
//		}
//	}
//
//}
//int main()
//{
//	char arr[] = "student a am i";
//	printf("%s\n",arr);
//	T_reverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}

//int who(int arr[],int len)
//{
//	int ret = 0;
//	int i = 0;
//	while(len--)
//	{
//		ret ^= arr[i];
//		i++;
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] ={1,2,3,4,5,6,7,6,5,4,3,2,1};
//	int len = sizeof(arr)/sizeof(arr[0]);
//	printf("%d\n",who(arr,len));
//	return 0;
//}
//
//unsigned int rever(unsigned int a)
//{
//int i = 0;
//unsigned int ret = 0;
//for(i=0; i<32; i++)
//{
//	ret += (((a>>i)&1)*(unsigned int)pow(2,31-i));
//}
//return ret;
//}
//int main()
//{
//unsigned int a = 25;
//printf("%u\n",rever(a));
//return 0;
//}

//unsigned int  reverse_bit(unsigned int value)
//{
//	int i = 31;
//	unsigned int sum = 0;
//	unsigned int m;
//	while (value != 0)
//		{
//			m = value & 1;     
//			value = value >> 1;   
//			sum = sum + m * (unsigned int)pow(2, i); 
//			i--;
//		}
//	return sum;
//}
//int main()
//{
//    int input = 0;
//	unsigned int ret = 0;
//	printf("请输入一个十进制数>:");
//	scanf("%d",&input);
//	ret = reverse_bit(input);
//	printf("%d在32位机器上将二进制序列翻转后的值为>:%u",input,ret);
//	return 0;
//}