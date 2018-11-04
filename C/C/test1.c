#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n=0;
struct student 
{
	char name[20];           //名字
	char num[20];            //学号
	char Class[20];          //班级
	char mayor[20];          //专业
	int age;                 //年龄
	int score;               //成绩
}s[100];
void add()                    //添加
{
	system("cls");
	printf("请输入学生基本信息：\n姓名：");
	scanf("%s",&s[n].name);
	printf("学号：");
	scanf("%s",&s[n].num);
	printf("年龄：");
	scanf("%d",&s[n].age);
	printf("班级：");
	scanf("%s",&s[n].Class);
	printf("专业：");
	scanf("%s",&s[n].mayor);
	printf("成绩：");
	scanf("%d",&s[n].score);
	n++;
	printf("\n\n您输入的信息已被保存!\n");
	system("pause");
	system("cls");
}
void print()
{
	int i;
	system("cls");
	printf("姓名\t学号\t\t班级\t年龄\t专业\t\t成绩\n");
	for(i=0;i<10;i++)
	{
		printf("%-8s",s[i].name);
		printf("%-16s",s[i].num);
		printf("%-8d",s[i].age);
		printf("%-8s",s[i].Class);
		printf("%-16s",s[i].mayor);
		printf("%-8d",s[i].score);
		printf("\n");
	}
	printf("\n信息显示完毕!\n");
	system("pause");
	system("cls");
}
 
void find()           //查找
{
	void find1();
	void find2();
	int a;
	system("cls");
	printf("1.按姓名查找\n2.按学号查询\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		find1();
		break;
	case 2:
		find2();
		break;
	}
}
void Delete()         //删除
{
	int i;
	char a[20];
	printf("请输入要删除的学号");
	scanf("%s",&a);
	for(i=0;i<n;i++)
		if(strcmp(a,s[i].num)==0)
		{
			while(i<n)
			{
				s[i]=s[i+1];
				i++;
			}
			n-=1;
		}
}
 
void amend()         //修改
{{
	int i,j,o;
	char a[20];
	system("cls");
	printf("修改学生的学号：");
	scanf("%s",&a);                           //通过输入需要修改信息的学号找到他
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(strcmp(a,s[i].num)==0)
		{
			printf("学号：%s\n",s[i].num);
	    	printf("姓名：%s\n",s[i].name);
	     	printf("班级：%s\n",s[i].Class);
	    	printf("专业：%s\n",s[i].mayor);
    		printf("年龄：%d\n",s[i].age);
			printf("成绩：%d\n\n",s[i].score);
			o=i;
		}
	}
	printf("1.修改学号\n2.修改姓名\n3.修改专业\n4.修改年级\n5.修改性别\n6.修改出生日期\n请选择：");
	scanf("%d",&j);                                                  //选择修改的信息
	switch(j)                                                        //选择结构!
	{
		case 1:
			printf("学号修改为：");
			scanf("%s",s[o].num);
			break;
			
		case 2:
			printf("姓名修改为：");
			scanf("%s",s[o].name);
			break;
		case 3:
			printf("专业修改为：");
			scanf("%s",&s[o].mayor);
			break;
		case 4:
			printf("班级修改为：");
			scanf("%d",&s[o].Class);
			break;
		case 5:
			printf("成绩修改为：");
			scanf("%s",&s[o].score);
			break;
		case 6:
			printf("年龄修改为：");
			scanf("%d",s[o].age);
			break;
	}
	printf("\n修改成功!\n\n");
	system("pause");
	system("cls");
}
}
void sort()         //排序(成绩)
{
	struct student tmp;
	int i,j;
	printf("共排序%d组数据\n\n",n);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)                 //for双循环对每一个值进行冒泡比较
		{
 
			if(s[i].score>s[j].score)  //前面的值如果大于后面的纸就进行冒泡排序
			{
				tmp=s[i];                //交换内容
				s[i]=s[j];               //交换内容
				s[j]=tmp;                //交换内容
			}
		}
	}
	printf("已按照成绩排序!\n");
	system("pause");
	system("cls");
}
void save()
{
	int i;
	FILE *fp;
 
	fp=fopen("c.txt","wb");
 
	for(i=0;i<n;i++)
		if(fwrite(&s[i],sizeof(s),1,fp)!=1)
			printf("Error");
	fclose(fp);
	printf("\n\n已存入文件中!!!\n");
	system("pause");
	system("cls");
}
void read()
{
	int i;
	FILE *fp;
	fp=fopen("C:\\Users\\Administrator\\Desktop\\New Code\\GitHub\\New-Empty\\C\\c.txt","rb");
	for(i=0;i<9;i++)
		fread(&s[i],sizeof(s),1,fp);
	fclose(fp);
	printf("\n\n已经读取文件!!!\n");
	system("pause");
	system("cls");
}
void find1()
{
	int i;
	char a[20];
	system("cls");
	printf("您选择按姓名查询：\n");
	scanf("%s",&a);
	for(i=0;i<n;i++)
	{
		if(strcmp(a,s[i].name)==0)
		{
			printf("\n\n\n%s\t",s[i].name);
			printf("%s\t\t",s[i].num);
			printf("%s\t",s[i].Class);
			printf("%d\t",s[i].age);
			printf("%d\t",s[i].score);
			printf("%s",s[i].mayor);
			printf("\n");
		}
	}
	system("pause");
	system("cls");
}
void find2()
{
	int i;
	char a[20];
	system("cls");
	printf("您选择按学号查询：\n");
	scanf("%s",&a);
	for(i=0;i<n;i++)
	{
		if(strcmp(a,s[i].num)==0)
		{
			printf("%s\t",s[i].name);
			printf("%s\t\t",s[i].num);
			printf("%s\t",s[i].Class);
			printf("%d\t",s[i].age);
			printf("%d\t",s[i].score);
			printf("%s",s[i].mayor);
			printf("\n");
		}
	}
	system("pause");
	system("cls");
}
 
void main()       //主函数
{
	int a=1;
	while(1)
	{
		if(a>=0&&a<=9)
		{
			system("cls");
			printf("〓〓〓〓〓〓〓〓〓〓  ☆   学 生 成 绩 管 理 系  统     ☆  〓〓〓〓〓〓〓〓〓〓\n");
			printf("〓〓〓〓〓〓〓〓〓★  ☆          1.增加学生信息        ☆  ★〓〓〓〓〓〓〓〓〓\n");
			printf("〓〓〓〓〓〓〓〓〓★  ☆          2.显示全部信息        ☆  ★〓〓〓〓〓〓〓〓〓\n");
			printf("〓〓〓〓〓〓〓〓〓★  ☆          3.查找全部信息        ☆  ★〓〓〓〓〓〓〓〓〓\n");
			printf("〓〓〓〓〓〓〓〓〓★  ☆          4.删除学生信息        ☆  ★〓〓〓〓〓〓〓〓〓\n");
			printf("〓〓〓〓〓〓〓〓〓★  ☆          5.修改学生信息        ☆  ★〓〓〓〓〓〓〓〓〓\n");
			printf("〓〓〓〓〓〓〓〓〓★  ☆          6.按成绩  排序        ☆  ★〓〓〓〓〓〓〓〓〓\n");
			printf("〓〓〓〓〓〓〓〓〓★  ☆          7.保存学生信息        ☆  ★〓〓〓〓〓〓〓〓〓\n");
			printf("〓〓〓〓〓〓〓〓〓★  ☆          8.读取学生信息        ☆  ★〓〓〓〓〓〓〓〓〓\n");
			printf("〓〓〓〓〓〓〓〓〓★  ☆          0.安全退出系统        ☆  ★〓〓〓〓〓〓〓〓〓\n");
			printf("请选择：");
			scanf("%d",&a);
			switch(a)
			{
			case 1:
				add();
				break;
			case 2:
				print();
				break;
			case 3:
				find();
				break;
			case 4:
				Delete();
				break;
			case 5:
				amend();
				break;
			case 6:
				sort();
				break;
			case 7:
				save();
				break;
			case 8:
				read();
				break;
			case 0:
				exit(0);
				break;
 
			}
		}
		else
		{
			printf(" 您输入的不符合要求，请输入符合要求的数字返回主菜单!");
			scanf("%d",&a);
		}
	}
}
