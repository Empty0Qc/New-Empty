#ifndef __HAND_H__
#define __HAND_H__
#define _CRT_SECURE_NO_WARNINGS 1

 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

 
#define SIZE sizeof(stu)

 
//������ṹ������
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

//��������
int Project();//��ӡ���������
pstu LoadInfo();//����data���� ���ļ�����
void PrintMenu();//��ӡ���˵�
pstu AddStu(pstu );//��
pstu DeleStu(pstu );//ɾ
pstu RwrStu(pstu );//��
void FindStu(pstu , char );//��
void Count(pstu ,char * ,float ,float );//ͳ��
void SaveQuit(pstu );//txt�ĵ�����



#endif //__HAND_H__