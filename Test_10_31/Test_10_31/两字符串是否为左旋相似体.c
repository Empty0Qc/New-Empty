#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
#include <assert.h>
//
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。 
//例如：给定s1 =AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0. 
//
//AABCD左旋一个字符得到ABCDA 
//AABCD左旋两个字符得到BCDAA 
//n
//AABCD右旋一个字符得到DAABC 
int rotate(char *a,char *b)
{
	assert(a);
	assert(b);
	strncat(a,a,strlen(a));       // strncat() 字符串按数目拼接
	if(strstr(a,b) == NULL)       // strstr() 字符串查找函数
		return 0;
	else
		return 1;
}
void isrotate(int ret)
{
	ret ? printf("两者相似!\n") : printf("两者不相似!\n");     //三目运算符运用
}
int main()
{
	char s[20] = "AABCD";
	char *s1 = "BCDAA";

	char m[20] = "abcd";
	char *m1 = "ABCD";

	int ret1 = rotate(s,s1);
	int ret2 = rotate(m,m1);

	isrotate(ret1);
	isrotate(ret2);

	return 0;
}