#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
#include <assert.h>
//
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ����� 
//���磺����s1 =AABCD��s2 = BCDAA������1������s1=abcd��s2=ACBD������0. 
//
//AABCD����һ���ַ��õ�ABCDA 
//AABCD���������ַ��õ�BCDAA 
//n
//AABCD����һ���ַ��õ�DAABC 
int rotate(char *a,char *b)
{
	assert(a);
	assert(b);
	strncat(a,a,strlen(a));       // strncat() �ַ�������Ŀƴ��
	if(strstr(a,b) == NULL)       // strstr() �ַ������Һ���
		return 0;
	else
		return 1;
}
void isrotate(int ret)
{
	ret ? printf("��������!\n") : printf("���߲�����!\n");     //��Ŀ���������
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