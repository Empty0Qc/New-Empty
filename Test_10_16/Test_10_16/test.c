#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//4.���ʵ�֣�
/*����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
��������:
1999 2299
�������:7*/

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
	printf("%d��%d������λ�в�ͬ�ĸ���Ϊ>:%d\n",a,b,count);
}
int main()
{
	int m = 0;
	int n = 0;
	printf("Ҫ�Ƚϵ���������>��",m,n);
	scanf("%d%d",&m,&n);
	Bit(m,n);
	return 0;
}

//3. ���һ��������ÿһλ������λ������
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
//	printf("%dת���ɶ����Ƶ�32λΪ: ",input);
//	for(i=31; i>=0; i--)
//	{
//		printf("%d ",arr[i]);
//	}
//	}
//	else if(tmp == 0)
//	{
//		printf("%dת���ɶ����Ƶ�32λΪ: ",input);
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
//	printf("%dת���ɶ����Ƶ�32λΪ: ",input);
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
//	printf("������ʮ���ƷǸ�����>:");
//	scanf("%d",&input);
//	Stst1(input,arr);
//	return 0;
//
//}


//2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�
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
//	printf("ת����Ķ���������λΪ>:");
//	for(i=31; i>0; i-=2)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	printf("ת����Ķ�����ż��λΪ>:");
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int main()
//{
//	int arr[32] = {0};
//	int input = 0;
//	printf("������ʮ������>:");
//	scanf("%d",&input);
//	Stst(input,arr);
//	return 0;
//}
//













//1. дһ���������ز����������� 1 �ĸ���


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
//	printf("Ҫ�жϵ���>:");
//	scanf("%d",&input);
//	ret = Count(input);
//	printf("%d�Ķ�����λ��1�ĸ���Ϊ%d\n",input,ret);
//	return 0;
//}
