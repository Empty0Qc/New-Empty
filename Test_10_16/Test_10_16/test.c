#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//4.编程实现：
/*两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
输入例子:
1999 2299
输出例子:7*/

void Bit(int m,int n)
{
	int a = m;
	int b = n;
	int i = 32;
	int count = 0;
	if((m>=0 &&n <0) || (m<0 && n>=0))
	{
		if(m<0)
			m *= (-1);
		else if(n<0)
			n *= (-1);
		count++;
		i--;
		while(i)
		{	
			if((m&1) != (n&1))
				count++;
			m >>= 1;
			n >>= 1;
			i--;
		}
	}
	else if(m<0 && n<0)
	{
		m *= (-1);
		n *= (-1);
	}
	else
	{
		while(i)
		{
			i--;
			if((m&1) != (n&1))
				count++;
			m >>= 1;
			n >>= 1;
		}
	}
	printf("%d与%d二进制位中不同的个数为>:%d\n",a,b,count);
}
int main()
{
	int m = 0;
	int n = 0;
	printf("要比较的两个整数>：",m,n);
	scanf("%d%d",&m,&n);
	Bit(m,n);
	return 0;
}

//3. 输出一个整数的每一位二进制位的数。
//void Stst1(int const input, int* arr)
//{
//	int i = 0;
//	int count = 0;
//	int tmp = input;
//	if(tmp > 0)
//	{
//	for(i=0; tmp!=0; i++)
//	{
//		arr[i] = tmp%2;
//		tmp /= 2;
//		count = i+1;
//	}
//	for(; count<32; count++)
//	{
//		arr[count] = 0;
//	}
//	printf("%d转换成二进制的32位为: ",input);
//	for(i=31; i>=0; i--)
//	{
//		printf("%d ",arr[i]);
//	}
//	}
//	else if(tmp == 0)
//	{
//		printf("%d转换成二进制的32位为: ",input);
//		i = 32;
//		while(i)
//		{
//			printf("0 ");
//			i--;
//		}
//		printf("\n");
//	}
//	else
//	{
//		tmp *= (-1);
//		for(i=0; tmp!=0; i++)
//	{
//		arr[i] = tmp%2;
//		tmp /= 2;
//		count = i+1;
//	}
//	for(; count<32; count++)
//	{
//		arr[count] = 0;
//	}
//	printf("%d转换成二进制的32位为: ",input);
//	printf("1 ");
//	for(i=30; i>=0; i--)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	}
//}
//int main()
//{
//	int arr[32] = {0};
//	int input = 0;
//	printf("请输入十进制非负数数>:");
//	scanf("%d",&input);
//	Stst1(input,arr);
//	return 0;
//
//}


//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
//void Stst(int const input,int* arr)
//{
//	int i = 0;
//	int count = 0;
//	int tmp = input;
//	for(i=0; tmp!=0; i++)
//	{
//		arr[i] = tmp%2;
//		tmp /= 2;
//		count = i+1;
//	}
//	for(; count<32; count++)
//	{
//		arr[count] = 0;
//	}
//	printf("转换后的二进制奇数位为>:");
//	for(i=31; i>0; i-=2)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	printf("转换后的二进制偶数位为>:");
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int main()
//{
//	int arr[32] = {0};
//	int input = 0;
//	printf("请输入十进制数>:");
//	scanf("%d",&input);
//	Stst(input,arr);
//	return 0;
//}
//













//1. 写一个函数返回参数二进制中 1 的个数


//int Count(int x)
//{
//	int i = 0;
//	while(x)
//	{
//		i++;
//		x &= (x>>1);
//	}
//	return i;
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	printf("要判断的数>:");
//	scanf("%d",&input);
//	ret = Count(input);
//	printf("%d的二进制位中1的个数为%d\n",input,ret);
//	return 0;
//}
