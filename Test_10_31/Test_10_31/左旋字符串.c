//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
////
////1.ʵ��һ�����������������ַ����е�k���ַ��� 
////ABCD����һ���ַ��õ�BCDA 
////ABCD���������ַ��õ�CDAB 
//void reverse(char *left,char *right)
//{
//	assert(left);
//	assert(right);
//	while(left < right)
//	{
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;
//		left++;
//		right--;
//	}
//}
//void left_rotate(char *str,const int len,int x)
//{
//	assert(str);
//	reverse(str,str+len-1);
//	reverse(str,str+x-1);
//	reverse(str+x,str+len-1);
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int input = 0;
//	int len = strlen(arr);
//flag1:
//	printf("Ҫ����תС��%dλ����Ϊ>:",len);
//	scanf("%d",&input);
//	if(len > input)
//		left_rotate(arr,len,input);
//	else
//	{
//		printf("�������\n");
//		goto flag1;
//	}
//	printf("%s\n",arr);
//	return 0;
//}