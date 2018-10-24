#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
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