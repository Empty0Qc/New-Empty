#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n=0;
struct student 
{
	char name[20];           //����
	char num[20];            //ѧ��
	char Class[20];          //�༶
	char mayor[20];          //רҵ
	int age;                 //����
	int score;               //�ɼ�
}s[100];
void add()                    //���
{
	system("cls");
	printf("������ѧ��������Ϣ��\n������");
	scanf("%s",&s[n].name);
	printf("ѧ�ţ�");
	scanf("%s",&s[n].num);
	printf("���䣺");
	scanf("%d",&s[n].age);
	printf("�༶��");
	scanf("%s",&s[n].Class);
	printf("רҵ��");
	scanf("%s",&s[n].mayor);
	printf("�ɼ���");
	scanf("%d",&s[n].score);
	n++;
	printf("\n\n���������Ϣ�ѱ�����!\n");
	system("pause");
	system("cls");
}
void print()
{
	int i;
	system("cls");
	printf("����\tѧ��\t\t�༶\t����\tרҵ\t\t�ɼ�\n");
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
	printf("\n��Ϣ��ʾ���!\n");
	system("pause");
	system("cls");
}
 
void find()           //����
{
	void find1();
	void find2();
	int a;
	system("cls");
	printf("1.����������\n2.��ѧ�Ų�ѯ\n");
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
void Delete()         //ɾ��
{
	int i;
	char a[20];
	printf("������Ҫɾ����ѧ��");
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
 
void amend()         //�޸�
{{
	int i,j,o;
	char a[20];
	system("cls");
	printf("�޸�ѧ����ѧ�ţ�");
	scanf("%s",&a);                           //ͨ��������Ҫ�޸���Ϣ��ѧ���ҵ���
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(strcmp(a,s[i].num)==0)
		{
			printf("ѧ�ţ�%s\n",s[i].num);
	    	printf("������%s\n",s[i].name);
	     	printf("�༶��%s\n",s[i].Class);
	    	printf("רҵ��%s\n",s[i].mayor);
    		printf("���䣺%d\n",s[i].age);
			printf("�ɼ���%d\n\n",s[i].score);
			o=i;
		}
	}
	printf("1.�޸�ѧ��\n2.�޸�����\n3.�޸�רҵ\n4.�޸��꼶\n5.�޸��Ա�\n6.�޸ĳ�������\n��ѡ��");
	scanf("%d",&j);                                                  //ѡ���޸ĵ���Ϣ
	switch(j)                                                        //ѡ��ṹ!
	{
		case 1:
			printf("ѧ���޸�Ϊ��");
			scanf("%s",s[o].num);
			break;
			
		case 2:
			printf("�����޸�Ϊ��");
			scanf("%s",s[o].name);
			break;
		case 3:
			printf("רҵ�޸�Ϊ��");
			scanf("%s",&s[o].mayor);
			break;
		case 4:
			printf("�༶�޸�Ϊ��");
			scanf("%d",&s[o].Class);
			break;
		case 5:
			printf("�ɼ��޸�Ϊ��");
			scanf("%s",&s[o].score);
			break;
		case 6:
			printf("�����޸�Ϊ��");
			scanf("%d",s[o].age);
			break;
	}
	printf("\n�޸ĳɹ�!\n\n");
	system("pause");
	system("cls");
}
}
void sort()         //����(�ɼ�)
{
	struct student tmp;
	int i,j;
	printf("������%d������\n\n",n);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)                 //for˫ѭ����ÿһ��ֵ����ð�ݱȽ�
		{
 
			if(s[i].score>s[j].score)  //ǰ���ֵ������ں����ֽ�ͽ���ð������
			{
				tmp=s[i];                //��������
				s[i]=s[j];               //��������
				s[j]=tmp;                //��������
			}
		}
	}
	printf("�Ѱ��ճɼ�����!\n");
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
	printf("\n\n�Ѵ����ļ���!!!\n");
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
	printf("\n\n�Ѿ���ȡ�ļ�!!!\n");
	system("pause");
	system("cls");
}
void find1()
{
	int i;
	char a[20];
	system("cls");
	printf("��ѡ��������ѯ��\n");
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
	printf("��ѡ��ѧ�Ų�ѯ��\n");
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
 
void main()       //������
{
	int a=1;
	while(1)
	{
		if(a>=0&&a<=9)
		{
			system("cls");
			printf("��������������������  ��   ѧ �� �� �� �� �� ϵ  ͳ     ��  ��������������������\n");
			printf("��������������������  ��          1.����ѧ����Ϣ        ��  �������������������\n");
			printf("��������������������  ��          2.��ʾȫ����Ϣ        ��  �������������������\n");
			printf("��������������������  ��          3.����ȫ����Ϣ        ��  �������������������\n");
			printf("��������������������  ��          4.ɾ��ѧ����Ϣ        ��  �������������������\n");
			printf("��������������������  ��          5.�޸�ѧ����Ϣ        ��  �������������������\n");
			printf("��������������������  ��          6.���ɼ�  ����        ��  �������������������\n");
			printf("��������������������  ��          7.����ѧ����Ϣ        ��  �������������������\n");
			printf("��������������������  ��          8.��ȡѧ����Ϣ        ��  �������������������\n");
			printf("��������������������  ��          0.��ȫ�˳�ϵͳ        ��  �������������������\n");
			printf("��ѡ��");
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
			printf(" ������Ĳ�����Ҫ�����������Ҫ������ַ������˵�!");
			scanf("%d",&a);
		}
	}
}
