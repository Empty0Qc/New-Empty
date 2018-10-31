#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
#include <assert.h>

//
//1.实现一个函数，可以左旋字符串中的k个字符。 
//ABCD左旋一个字符得到BCDA 
//ABCD左旋两个字符得到CDAB 
void left_rotate(char *str,const int len,int x)
{
	char arr[] = {0};
	int tmp = x;
	int i = 0;
	int j = len-x;
	assert(str);
	while(j--)
	{
		arr[i] = *(str+tmp);
		tmp++;
	}
	while()

}
int main()
{
	char arr[] = "ABCDEF";
	int input = 0;
	int len = strlen(arr);
flag1:
	printf("要左旋转小于%d位的数为>:",len);
	scanf("%d",&input);
	if(len > input)
		left_rotate(arr,len,input);
	else
	{
		printf("输入错误！");
		goto flag1;
	}
	printf("%s\n",arr);
	return 0;
}