#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char c;
	int letters = 0,
		space = 0,
		digit = 0,
		others = 0;
	printf("请输入字符串>:");
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
			letters++;
		else if(c == ' ')
			space++;
		else if(c>='0'&&c<='9')
			digit++;
		else
			others++;
	}
	printf("\n统计结果:\n英文字母=%d\n空格=%d\n整数=%d\n其他字符=%d\n\n", letters, space, digit, others);
	return 0;
}


//#include <stdlib.h>
//
//int main()
//{
//	int input = 0;	
//	int *p;
//	int i;
//
//	printf("Please>:");
//	scanf("%d",&input);
//	p = (int*)calloc(input,sizeof(int));
//
//	for(i=0; i<input; i++)
//	{
//		p[i] = i+1;
//		printf("%5d",p[i]);
//		if((i+1)%10 == 0)
//			printf("\n");
//	}
//	free(p);
//	p = NULL;
//	printf("\n");
//	return 0;
//}