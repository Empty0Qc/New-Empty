#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <assert.h>


//4.
//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
int my_strlen(const char *str)
{
	int len = 0;
	assert(str);
	while(*str != '\0')
	{
		str++;
		len++;
	}
	return len;
}

void reverse(char *left,char *right)
{
	assert(left);
	assert(right);
	while(left < right)
	{
		char tmp = *left;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void str_reverse(char *str)
{
	int len = my_strlen(str);
	assert(str);
	reverse(str,str+len-1);
	while (*str != '\0')
	{
		char *p = str;
		while ((*str != ' ') && (*str != '\0'))
		{
			str++;
		}
		reverse(p, str - 1);
		if (*str != '\0')
		{
			str++;
		}
	}
}
int main()
{
	char str[] = "student a am i";
	str_reverse(str);
	printf("%s\n",str);
	return 0;
}
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//int main()
//{
//	int i,j;
//	int arr[7] = {0};
//	int len = sizeof(arr)/sizeof(arr[0]);
//	printf("���������>:\n");
//	for(i=0; i<len; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(i=0; i<len; i++)
//	{
//		for(j=i+1; j<len; j++)
//		{
//			if(!(arr[i]^arr[j]))
//			{
//				arr[i] = 0;
//				arr[j] = 0;
//			}
//		}
//	}
//	for(i=0; i<len; i++)
//	{
//		if(arr[i])
//		{
//			printf("%d\n",arr[i]);
//		}
//	}
//	return 0;
//}



//3.0�汾ֱ���ڶ�����λ�Ͻ��в��������ӿ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n",(((a&b)+(a^b))>>1));
//	return 0 ;
//}
//2.0��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ��
//a��ֵ+a��b�Ĳ�ֵ��һ������ƽ��ֵ�ķ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n",a+((b-a)>>1));
//	return 0 ;
//}

//������λ����һλ��� 
//1.0a+b��ֵ���ǹ��󽫴���������,���Թ���Ϊ������ʹ�ó���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n",(a+b)>>1);
//	return 0;
//}

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
//unsigned int  reverse_bit(unsigned int value)
//{
//	int i = 31;
//	unsigned int sum = 0;
//	unsigned int m;
//	while (value != 0)
//		{
//			m = value & 1;     
//			value = value >> 1;   
//			sum = sum + m * (unsigned int)pow(2, i); 
//			i--;
//		}
//	return sum;
//}
//int main()
//{
//    int input = 0;
//	unsigned int ret = 0;
//	printf("������һ��ʮ������>:");
//	scanf("%d",&input);
//	ret = reverse_bit(input);
//	printf("%d��32λ�����Ͻ����������з�ת���ֵΪ>:%u",input,ret);
//	return 0;
//}
    //%d              ʮ�����з������� 
    //%u              ʮ�����޷������� 
    //%f              ������ 
    //%s              �ַ��� 
    //%c              �����ַ� 
    //%p              ָ���ֵ 
    //%e              ָ����ʽ�ĸ����� 
    //%x, %X          �޷�����ʮ�����Ʊ�ʾ������ 
    //%0              �޷����԰˽��Ʊ�ʾ������ 
    //%g              �Զ�ѡ����ʵı�ʾ�� 
  /*  ������"%"����ĸ֮���Сд��ĸl, ��ʾ������ǳ������� 
				%ld   ��ʾ���long���� 
				%lf   ��ʾ���double������

    ������"%"����ĸ֮�������ֱ�ʾ��󳡿� 
		����:  %3d   ��ʾ���3λ������, ����3λ�Ҷ��롣 
            %9.2f ��ʾ�������Ϊ9�ĸ�����, ����С��λΪ2, ����λΪ6,С����ռһλ, ����9λ�Ҷ��롣 
            %8s   ��ʾ���8���ַ����ַ���, ����8���ַ��Ҷ��롣 
    ����ַ����ĳ��ȡ���������λ������˵���ĳ���, ������ʵ�ʳ�������� 
	���Ը�����, ����������λ��������˵��������λ���, ����ʵ������λ���; 
		��С������λ��������˵����С��λ���, ��˵���Ŀ����������������� 
		����, ���������ֵǰ��һЩ0, ��Ӧ�ڳ�����ǰ�Ӹ�0�� 
    ����:   %04d  ��ʾ�����һ��С��4λ����ֵʱ, ����ǰ�油0ʹ���ܿ�� Ϊ4λ�� 
    ����ø�������ʾ�ַ����������������ʽ, С���������ִ��������, С����ǰ�����ִ�����С��ȡ�
		����: %6.9s ��ʾ��ʾһ�����Ȳ�С��6�Ҳ�����9���ַ�����������9,  ���9���ַ��Ժ�����ݽ���ɾ����
		���Կ�������������Ҷ���, ����"%"����ĸ֮�����һ��"-" �ſ�˵�����Ϊ�����, ����Ϊ�Ҷ��롣 
		����:   %-7d  ��ʾ���7λ��������� 
			    %-10s ��ʾ���10���ַ������*/
