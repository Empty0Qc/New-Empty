#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Count(int x)
{
	int i = 0;
	while(x)
	{
		i++;
		x &= (x>>1);
	}
	return i;
}
int main()
{
	int input = 0;
	int ret = 0;
	printf("Ҫ�жϵ���>:");
	scanf("%d",&input);
	ret = Count(input);
	printf("%d�Ķ�����λ��1�ĸ���Ϊ%d\n",input,ret);
	return 0;
}
