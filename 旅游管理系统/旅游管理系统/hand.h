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
	sub  subject[3];
	struct student* next;
}stu,*pstu;

//函数申明
pstu LoadInfo();
void PrintMenu();
pstu AddStu(pstu );
pstu DeleStu(pstu );
pstu RwrStu(pstu );
void FindStu(pstu , char );
void Count(pstu ,char * ,float ,float );
void Rank(pstu ,char * );
void SaveQuit(pstu );
int Project();

