#include "hand.h"

//打印主菜单
void PrintMenu()    
{
	printf("***************************************\n");
	printf("             学生信息管理系统          \n");
	printf("***************************************\n");
	putchar('\n');
	printf("菜单\n");
	printf("\025 1、信息管理\n");
	printf("\025 2、信息查询\n");
	printf("\025 3、成绩统计\n");
/*	printf("\025 4、成绩排序\n");*/	
	printf("\025 5、保存退出\n");
}

int Project()
{
	float score1,score2;
	char n,j;
	char subname[20];
	pstu head,ptr;
	head = LoadInfo();
	ptr = head->next;
	//创建菜单，进入选择循环
	while(1)
	{
		PrintMenu();
		printf("请输入您的选择编号：");
		scanf("%d",&n);
		getchar();   					//接收上次输入选择后的回车输入,不致影响下一次输入
		switch(n)
		{
		case 1: 
			{
				//信息管理
				system("cls");    			//清屏
				j=0;
				while(4!=j)		   	//循环进入子菜单选择
				{
					printf("欢迎进入信息管理版块！\n\n");
					printf("\025 1、添加学生\n");
					printf("\025 2、删除学生\n");
					printf("\025 3、修改学生信息\n");
					printf("\025 4、返回\n");
					printf("请输入您的选择编号：\n");
					scanf("%d",&j);
					getchar();
					
					if     ( 1 == j) head = AddStu(head);		//添加学生
					else if( 2 == j) head = DeleStu(head);		//删除学生
					else if( 3 == j) head = RwrStu(head);		//修改重写学生信息
					else if( 4 == j) ;
					else printf("输入有误,请重新输入!\n");
					
				}
				printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				system("cls");			//以下所有getchar()、system("cls")同理
				break;
			}
		case 2:
			{
				//信息查询
				system("cls");
				printf("欢迎进入信息查询版块!\n");
				printf("请输入要查询的学生编号：");
				scanf("%d",&j);
				getchar();
				//printf("%d\n",j);   		//检测输入是否成功,调试程序用
				FindStu(head,j);    		//查询并输出
				printf("\n请输入回车键返回主菜单！");
				getchar();
				system("cls");
				break;
			}
		case 3:
			{
				//成绩统计
				system("cls");
				printf("欢迎进入成绩统计版块!\n");
				printf("请输入科目：");
				scanf("%s",&subname);
				getchar();
				printf("请输入分数范围(score1,score2)：");
				scanf("%f,%f",&score1,&score2);
				getchar();
				/*printf("%s %5.2f %5.2f\n",subname,
						 score1,score2);   */          //检测输入是否成功，调试程序用
				Count(head,subname,score1,score2);   	   //统计并输出
				printf("请输入回车键返回主菜单！");
				getchar();
				system("cls");
				break;
			}
		//case 4:
		//	{
		//		//成绩排序
		//		system("cls");
		//		printf("欢迎进入成绩排序版块，请输入科目：");
		//		scanf("%s",&subname);
		//		getchar();
		//		Rank(head,subname);  			//排序并输出
		//		printf("\n请输入回车键返回主菜单！\n");
		//		getchar();
		//		system("cls");
		//		break;
		//	}
		case 5:
			{
				//保存退出
				SaveQuit(head);				//文件操作，保存并退出
				free(head);
				return 0;
			}
		default: 
			{
				printf("输入有误，按回车键重新选择！\n");	//主菜单错误输出检测
				getchar();
				system("cls");
			}
		}
	}
}

int main()
{
	char input1[20] = {0};
	char input2[20] = {0};
	system("mode con cols=50 lines=25");
	system("color f0");
	system("date /T");
	system("TIME /T");
	while(1)
	{
		printf("用户名>:");
		scanf("%s",input1);
		if(!strcmp("屈琛",input1)||!strcmp("root",input1))
		{
			printf("密码>:");
			scanf("%s",input2);
			if((!strcmp("屈琛",input1)&&!strcmp("123456",input2))||(!strcmp("root",input1)&&!strcmp("root",input2)))
			{
				Project();
				break;
			}
			else
				printf("密码错误!\n");
		}
		else
			printf("用户名错误!\n");
	}
	return 0;
}