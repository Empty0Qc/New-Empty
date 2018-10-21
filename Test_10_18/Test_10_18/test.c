#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <assert.h>


//4.
//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。
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
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//int main()
//{
//	int i,j;
//	int arr[7] = {0};
//	int len = sizeof(arr)/sizeof(arr[0]);
//	printf("请逐个输入>:\n");
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



//3.0版本直接在二进制位上进行操作，更加快捷
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n",(((a&b)+(a^b))>>1));
//	return 0 ;
//}
//2.0不使用（a+b）/2这种方式，求两个数的平均值。
//a的值+a与b的差值的一半来求平均值的方法
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n",a+((b-a)>>1));
//	return 0 ;
//}

//二进制位右移一位求除 
//1.0a+b的值若是过大将存在溢出情况,所以归类为错误不宜使用程序
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n",(a+b)>>1);
//	return 0;
//}

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
//	printf("请输入一个十进制数>:");
//	scanf("%d",&input);
//	ret = reverse_bit(input);
//	printf("%d在32位机器上将二进制序列翻转后的值为>:%u",input,ret);
//	return 0;
//}
    //%d              十进制有符号整数 
    //%u              十进制无符号整数 
    //%f              浮点数 
    //%s              字符串 
    //%c              单个字符 
    //%p              指针的值 
    //%e              指数形式的浮点数 
    //%x, %X          无符号以十六进制表示的整数 
    //%0              无符号以八进制表示的整数 
    //%g              自动选择合适的表示法 
  /*  可以在"%"和字母之间加小写字母l, 表示输出的是长型数。 
				%ld   表示输出long整数 
				%lf   表示输出double浮点数

    可以在"%"和字母之间插进数字表示最大场宽。 
		例如:  %3d   表示输出3位整型数, 不够3位右对齐。 
            %9.2f 表示输出场宽为9的浮点数, 其中小数位为2, 整数位为6,小数点占一位, 不够9位右对齐。 
            %8s   表示输出8个字符的字符串, 不够8个字符右对齐。 
    如果字符串的长度、或整型数位数超过说明的场宽, 将按其实际长度输出。 
	但对浮点数, 若整数部分位数超过了说明的整数位宽度, 将按实际整数位输出; 
		若小数部分位数超过了说明的小数位宽度, 则按说明的宽度以四舍五入输出。 
		另外, 若想在输出值前加一些0, 就应在场宽项前加个0。 
    例如:   %04d  表示在输出一个小于4位的数值时, 将在前面补0使其总宽度 为4位。 
    如果用浮点数表示字符或整型量的输出格式, 小数点后的数字代表最大宽度, 小数点前的数字代表最小宽度。
		例如: %6.9s 表示显示一个长度不小于6且不大于9的字符串。若大于9,  则第9个字符以后的内容将被删除。
		可以控制输出左对齐或右对齐, 即在"%"和字母之间加入一个"-" 号可说明输出为左对齐, 否则为右对齐。 
		例如:   %-7d  表示输出7位整数左对齐 
			    %-10s 表示输出10个字符左对齐*/
