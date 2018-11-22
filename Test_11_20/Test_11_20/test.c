#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

//3.模拟实现strncmp
int my_strncmp(const char* dst,const char* ptr,size_t n)
{
	assert(dst);
	assert(ptr);
	while(--n && (*dst == *ptr) && (*ptr != '\0') )
	{
		ptr++;
		dst++;
	}
	return *dst - *dst;

}
int main()
{
	char* a1 = "abcdef";
	char* a2 = "abcdef";
	if(my_strncmp(a1,a2,3) > 0)
		printf("hehe");
	else if(my_strncmp(a1,a2,3) < 0)
		printf("haha");
	else
		printf("一样!");
	return 0;
}

//2.模拟实现strncat 
//
//char* my_strncat(char* dest,const char* str, size_t n)
//{
//	char *cp=dest;
//  assert(dest);
//  assert(str);
//	while(*cp!='\0') ++cp;
//	while(n&&(*cp++=*str++)!='\0')
//	{
//		--n;
//	}
//	return dest;
//
//}
//
//int main()
//{
//	char a1[20] = "abc";
//	char a2[10] = "abcdef";
//	char* a3 = my_strncat(a1,a2,7);
//	printf("%s",a3);
//	return 0;
//}

//1.模拟实现strncpy 

//char* my_strncpy(char* dst,const char* ptr,size_t n)
//{
//	char* p = dst;
//	assert(dst);
//	assert(ptr);
//	while( n&& *ptr != '\0'&&(*p++ = *ptr++))--n;
//	return dst;
//}
//int main()
//{
//	char a1[1024] = {0};
//	char a2[1024] = "acdef";
//	char* a3 = my_strncpy(a1,a2,1);
//	printf("%s",a3);
//	return 0;
//}