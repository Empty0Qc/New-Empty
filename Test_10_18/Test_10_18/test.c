#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//1.��д������
//unsigned int  reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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
	printf("������һ��ʮ������>:");
	scanf("%d",&input);
	ret = reverse_bit(input);
	printf("%d��32λ�����Ͻ����������з�ת���ֵΪ>:%u",input,ret);
	return 0;
}