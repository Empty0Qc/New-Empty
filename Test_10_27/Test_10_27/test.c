#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
//����str����ģ��
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
	printf("arr���ַ�������Ϊ%d\n",my_strlen(arr));
	return 0;
}

//int main()
//{
//	int input,m,n5,n2,n1=0,k=0;
//	printf("������Ҫ֪����Ǯ��:");
//	scanf("%d",&input);
//	m = input*100;
//	for(n5=0; n5<=m/5; n5++)
//	{
//		for(n2=0; n2<=(m-5*n5)/2; n2++)
//		{
//			n1 = m-5*n5-2*n2;
//			if(n1 >= 0)
//			{
//				printf("%d����%3d��5�� %3d��2�� %3d��1�� ���\n",input,n5,n2,n1);
//							k++;
//			}
//		}
//	}
//	printf("�ܹ���%d����Ϸ�����\n",k);
//	return 0;
//}