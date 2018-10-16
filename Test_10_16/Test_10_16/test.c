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
	printf("要判断的数>:");
	scanf("%d",&input);
	ret = Count(input);
	printf("%d的二进制位中1的个数为%d\n",input,ret);
	return 0;
}
