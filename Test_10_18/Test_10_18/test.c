#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//1.编写函数：
//unsigned int  reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//          2550136832
unsigned int  reverse_bit(unsigned int value)
{
	int i = 31;
	unsigned int sum = 0;
	unsigned int m;
	while (value != 0)
		{
			m = value & 1;     
			value = value >> 1;   
			sum = sum + m * (unsigned int)pow(2, i); 
			i--;
		}
	return sum;
}
int main()
{
    int input = 0;
	unsigned int ret = 0;
	printf("请输入一个十进制数>:");
	scanf("%d",&input);
	ret = reverse_bit(input);
	printf("%d在32位机器上将二进制序列翻转后的值为>:%u",input,ret);
	return 0;
}