#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

//7.实现memmove
//int main()
//{
//	return 0;
//}


//6.实现memcpy 
void my_memcpy(char *dst,char *src,int count)
{
	char *p = dst;
	char *q = src;
	assert(dst);
	assert(src);

	while(count-- && *q != '\0')
	{
		*p++ = *q++;
	}
	while(*p++)
	{
		;
	}
	*p = '\0';
}

int main()
{
	char *src = "dsd";
	char dst[100] = "abcdefgh";
	my_memcpy(dst,dst,5);
	printf("%s\n",dst);
	return 0;
}
////5.实现strcmp
//
//int my_strcmp(char const  *p,char const  *q)
//{
//	assert(p != NULL && q != NULL);
//	while(*p == *q)
//	{
//		if(*p == '\0')
//			return 0;
//		p++;
//		q++;
//	}
//	if(*p>*q)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char *p = "abcdef";
//	char *q = "abcdf";
//	int ret = my_strcmp(p,q);
//	if(ret > 0)
//		printf("前者大于后者!\n");
//	else if(ret < 0)
//		printf("前者小于后者!\n");
//	else
//		printf("两者一样!\n");
//	return 0;
//}

//4.实现strchr 

//char* my_strchr(char* str, char a)
//{
//	assert(str);
//	while(*str != '\0' && *str != a)
//	{
//		str++;
//	}
//	return *str==a?str:NULL;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char a = 'd';
//	printf("%s",strchr(arr,a));
//	return 0;
//}
//3.实现strstr 
//char* my_strstr(const char *str1,const char *str2)
//{
//	char *cur =(char *)str1	;
//	char *s1,*s2;
//	assert(str1 != NULL && str2 != NULL);
//	while(*cur)
//	{
//		s1 = cur;
//		s2 = (char *)str2;
//		while(*s1 && !(*s2 - *s1))
//		{
//			s1++;
//			s2++;
//		}
//		if(!*s2)
//			return cur;
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char src[] = "abcdaeaf";
//	char *dst = "cde";
//	if(my_strstr(src,dst))
//		printf("true!\n");
//	else
//		printf("flase!\n");
//	return 0;
//}
//4.实现strchr 
//5.实现strcmp 
//6.实现memcpy 
//7.实现memmove