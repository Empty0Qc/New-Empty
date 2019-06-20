#ifndef __HAND_H__
#define __HAND_H__
#define _CRT_SECURE_NO_WARNINGS 1

 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

 
#define SIZE sizeof(stu)

 
//链表结点结构体声明
typedef struct subjects
{
	char name[20];
	float score;
}sub;
 
typedef struct student
{
	int num;
	char name[20];
	sub  subject[2];
	struct student* next;
}stu,*pstu;

//函数申明
int Project();//打印主程序界面
pstu LoadInfo();//加载data数据 ，文件操作
void PrintMenu();//打印主菜单
pstu AddStu(pstu );//增
pstu DeleStu(pstu );//删
pstu RwrStu(pstu );//改
void FindStu(pstu , char );//查
void Count(pstu ,char * ,float ,float );//统计
void SaveQuit(pstu );//txt文档保存



#endif //__HAND_H__