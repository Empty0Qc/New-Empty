#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
#include <assert.h>

//
//1.ʵ��һ�����������������ַ����е�k���ַ��� 
//ABCD����һ���ַ��õ�BCDA 
//ABCD���������ַ��õ�CDAB 
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
	printf("Ҫ����תС��%dλ����Ϊ>:",len);
	scanf("%d",&input);
	if(len > input)
		left_rotate(arr,len,input);
	else
	{
		printf("�������");
		goto flag1;
	}
	printf("%s\n",arr);
	return 0;
}