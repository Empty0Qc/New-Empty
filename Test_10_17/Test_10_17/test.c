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
	system("title C���Թػ�����");
	system("mode con cols=48 lines=25");
	system("color f0");
	system("date /T");
	system("TIME /T");
flag:
	printf("----------- C���Թػ����� -----------\n");
    printf("1.ʵ��10�����ڵĶ�ʱ�رռ����\n");
    printf("2.�����رռ����\n");
    printf("3.ע�������\n");
	printf("4.ȡ���ػ��ƻ�\n");
    printf("0.�˳�ϵͳ\n");
    printf("-------------------------------------\n");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
		printf("�����ڶ������ػ���(0~600)\n");
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
		printf("��ô������������ʲô��\n");
		scanf("%s",input);
		if(strcmp("������",input) == 0)
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