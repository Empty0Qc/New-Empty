#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
//各种str函数模拟
int my_strlen(char *str)
{
	int i = 0;
	assert(str);
	while(*str++)
	{
		i++;
	}
	return i;
}

int main()
{
	char arr[] = "abcdef";
	printf("arr的字符串长度为%d\n",my_strlen(arr));
	return 0;
}

//int main()
//{
//	int input,m,n5,n2,n1=0,k=0;
//	printf("请输入要知道的钱数:");
//	scanf("%d",&input);
//	m = input*100;
//	for(n5=0; n5<=m/5; n5++)
//	{
//		for(n2=0; n2<=(m-5*n5)/2; n2++)
//		{
//			n1 = m-5*n5-2*n2;
//			if(n1 >= 0)
//			{
//				printf("%d可由%3d个5分 %3d个2分 %3d个1分 组成\n",input,n5,n2,n1);
//							k++;
//			}
//		}
//	}
//	printf("总共有%d种组合方法。\n",k);
//	return 0;
//}