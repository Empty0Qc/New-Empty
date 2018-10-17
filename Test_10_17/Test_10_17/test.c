#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char cmd[20] = {"shutdown -s -t "};
	char t[5] = "0";
	char input[10];
	int c;
	system("title C语言关机程序");
	system("mode con cols=48 lines=25");
	system("color f0");
	system("date /T");
	system("TIME /T");
flag:
	printf("----------- C语言关机程序 -----------\n");
    printf("1.实现10分钟内的定时关闭计算机\n");
    printf("2.立即关闭计算机\n");
    printf("3.注销计算机\n");
	printf("4.取消关机计划\n");
    printf("0.退出系统\n");
    printf("-------------------------------------\n");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
		printf("你想在多少秒后关机？(0~600)\n");
		scanf("%s",t);
		system(strcat(cmd,t));
		goto flag;
		break;
	case 2:
		system("shutdown -p");
		break;
	case 3:
		system("shutdown -l");
		break;
flag2:
	case 4:
		printf("那么你快告诉我你是什么？\n");
		scanf("%s",input);
		if(strcmp("我是猪",input) == 0)
			system("shutdown -a");
		else
			goto flag2;
		break;
	case 0:
		break;
	default:
		printf("Error!\n");

	}
	system("pause");
    return 0;
}