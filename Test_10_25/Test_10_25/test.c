#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//一只刚出生的奶牛，4年生1只奶牛，以后每一年生1只。现在给你一只刚出生的奶牛，求20年后有多少奶牛。
//递归的好用处
int CalCowsNum(int iYear)
{
	int iCnt = 0;
	long lCowsNum = 1;                               //奶牛总数
	for(iCnt=1; iCnt<=iYear; iCnt++)
	{                                                //4年以后奶牛数量开始增多
		if(iCnt>=4)
		{
			if((iYear-iCnt)>3)
			{
				lCowsNum += CalCowsNum(iYear - iCnt);//第二个四年开始后产的奶牛开始升新奶牛
			}
			else
				lCowsNum++;
		}
	}
	return lCowsNum;                                 //奶牛数
}

int main()
{
	int iYear = 0;
	printf("Please input require yeras:");
	scanf("%d",&iYear);                              //输入年数
	printf("In %d years,There is %d cows.\n",iYear,CalCowsNum(iYear));
	return 0;
}

//int main()
//{
//	char c;
//	int letters = 0,
//		space = 0,
//		digit = 0,
//		others = 0;
//	printf("请输入字符串>:");
//	while((c=getchar())!='\n')
//	{
//		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
//			letters++;
//		else if(c == ' ')
//			space++;
//		else if(c>='0'&&c<='9')
//			digit++;
//		else
//			others++;
//	}
//	printf("\n统计结果:\n英文字母=%d\n空格=%d\n整数=%d\n其他字符=%d\n\n", letters, space, digit, others);
//	return 0;
//}


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