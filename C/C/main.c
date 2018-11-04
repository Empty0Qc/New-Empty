#define _CRT_SECURE_NO_WARNINGS 1
/**************************************************************
Ҫ��
1������ѧ������Ϣ��������ѧ�ţ����������Ƴɼ�
2������Ϣ������ļ����ܷ���ʹ��
3������Ϣ���������������ѧ����Ϣ���޸ģ�ɾ����
   ��ѧ�š�������ѯѧ����Ϣ
4���ܽ��п�Ŀ�ɼ����򣬿�Ŀ�����β�ѯ
��data�ļ�ʵ����
001  С��  ����  60.00  Ӣ��  70.00  ��ѧ  90.00
002  С��  ����  70.00  Ӣ��  90.00  ��ѧ  80.00
003  С��  ����  80.00  Ӣ��  80.00  ��ѧ  70.00
004  С��  ����  90.00  Ӣ��  70.00  ��ѧ 100.00
***************************************************************/
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
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
	sub  subject[3];
	struct student* next;
}stu,*pstu;
 
#define SIZE sizeof(stu)
 
//��������
pstu LoadInfo();
void PrintMenu();
pstu AddStu(pstu );
pstu DeleStu(pstu );
pstu RwrStu(pstu );
void FindStu(pstu , char );
void Count(pstu ,char * ,float ,float );
void Rank(pstu ,char * );
void SaveQuit(pstu );
 
//������
char n;
int main()
{ 
	float score1,score2;
	char n,j;
	char subname[20];
	pstu head,ptr;
	
	head = LoadInfo();
	ptr = head->next;
 
	//�����˵�������ѡ��ѭ��
	while(1)
	{
		PrintMenu();
		printf("����������ѡ���ţ�");
		scanf("%d",&n);
		getchar();   					//�����ϴ�����ѡ���Ļس�����,����Ӱ����һ������
		switch(n)
		{
		case 1: 
			{
				//��Ϣ����
				system("cls");    			//����
				j=0;
				while(4!=j)		   	//ѭ�������Ӳ˵�ѡ��
				{
					printf("��ӭ������Ϣ�����飡\n\n");
					printf("\025 1�����ѧ��\n");
					printf("\025 2��ɾ��ѧ��\n");
					printf("\025 3���޸�ѧ����Ϣ\n");
					printf("\025 4������\n");
					printf("����������ѡ���ţ�\n");
					scanf("%d",&j);
					getchar();
					
					if     ( 1 == j) head = AddStu(head);		//���ѧ��
					else if( 2 == j) head = DeleStu(head);		//ɾ��ѧ��
					else if( 3 == j) head = RwrStu(head);		//�޸���дѧ����Ϣ
					else if( 4 == j) ;
					else printf("��������,����������!\n");
					
				}
				printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
			}
		case 2:
			{
				//��Ϣ��ѯ
				system("cls");
				printf("��ӭ������Ϣ��ѯ���!\n");
				printf("������Ҫ��ѯ��ѧ����ţ�");
				scanf("%d",&j);
				getchar();
				//printf("%d\n",j);   		//��������Ƿ�ɹ�,���Գ�����
				FindStu(head,j);    		//��ѯ�����
				printf("\n������س����������˵���");
				getchar();
				system("cls");
				break;
			}
		case 3:
			{
				//�ɼ�ͳ��
				system("cls");
				printf("��ӭ����ɼ�ͳ�ư��!\n");
				printf("�������Ŀ��");
				scanf("%s",&subname);
				getchar();
				printf("�����������Χ(score1,score2)��");
				scanf("%f,%f",&score1,&score2);
				getchar();
				/*printf("%s %5.2f %5.2f\n",subname,
						 score1,score2);   */          //��������Ƿ�ɹ������Գ�����
				Count(head,subname,score1,score2);   	   //ͳ�Ʋ����
				printf("������س����������˵���");
				getchar();
				system("cls");
				break;
			}
		case 4:
			{
				//�ɼ�����
				system("cls");
				printf("��ӭ����ɼ������飬�������Ŀ��");
				scanf("%s",&subname);
				getchar();
				Rank(head,subname);  			//�������
				printf("\n������س����������˵���\n");
				getchar();
				system("cls");
				break;
			}
		case 5:
			{
				//�����˳�
				SaveQuit(head);				//�ļ����������沢�˳�
				free(head);
				return 0;
			}
		default: 
			{
				printf("�������󣬰��س�������ѡ��\n");	//���˵�����������
				getchar();
				system("cls");
			}
		}
	}
	
	  
}
 
//����data���� ���ļ�����
pstu LoadInfo()
{
	int   num;
	char name[20];
	char sub1[20];
	char sub2[20];
	char sub3[20];
	float score1;
	float score2;
	float score3;
	
	char filename[] = "C:\\Users\\Administrator\\Desktop\\New Code\\GitHub\\New-Empty\\C\\C\\Debug\\data.txt";  //�ļ���,�˴�Ϊ�򻯱�̣����ù̶���ַ���ƣ�δ������
   	FILE *fp; 
	pstu head,ptr;
	
	//��������ͷ���Ŀյ�����head���������������Ϣ
	head = (pstu)malloc(SIZE);
	ptr = head;
	ptr->next = NULL;
	
	
	//����data�ļ�������head����
	if( NULL == (fp = fopen(filename,"r")) ) 			//�ж��ļ��Ƿ���ڼ��ɶ�
	{ 
		printf("error!"); 
		exit(0); 
	} 
	
	while (!feof(fp)) 
	{ 
		fscanf(fp,"%d %s %s %f %s %f %s %f\n",&num,&name,
			  &sub1,&score1,&sub2,&score2,&sub3,&score3); //��ȡһ�У����ø�ʽ����ȡ���������������ֶ�ȡ���������ݴ�������
																//�÷���ȱ�����ԣ������ݸ�ʽҪ����У���data�ļ��涨���ݸ�ʽ
		ptr->next = (pstu)malloc(SIZE);
		ptr = ptr->next;
		ptr->next = NULL;
		
		ptr->num = num;
		strcpy(ptr->name,name);
		strcpy(ptr->subject[0].name,sub1);
		ptr->subject[0].score = score1;
		strcpy(ptr->subject[1].name,sub2);
		ptr->subject[1].score = score2;
		strcpy(ptr->subject[2].name,sub3);
		ptr->subject[2].score = score3;
		
	} 
	
    fclose(fp);                     					//�ر��ļ�,�ѵõ�����data��Ϣ������head
	
	return head;
}
 
 
//��ӡ���˵�
void PrintMenu()    
{
	printf("***************************************\n");
	printf("           ���ѧ����Ϣ����ϵͳ        \n");
	printf("***************************************\n");
	putchar('\n');
	printf("�˵�\n");
	printf("\025 1����Ϣ����\n");
	printf("\025 2����Ϣ��ѯ\n");
	printf("\025 3���ɼ�ͳ��\n");
	printf("\025 4���ɼ�����\n");	
	printf("\025 5�������˳�\n");
}
 
//���ѧ��
pstu AddStu(pstu x)  
{
	char namestu[20];
	char *p;
	char subname1[20],subname2[20],subname3[20];
	pstu head,ptr;
	
	head = x;
	ptr = head;
	
	while( NULL != ptr->next )					//���������ҵ���β���
	{
		ptr = ptr->next;
	}
	
	ptr->next = (pstu)malloc(SIZE);				//Ĭ��������ĩ׷�������Ϣ
	ptr = ptr->next;
	ptr->next = NULL;
	
	printf("���������ѧ������Ϣ��\n");
 
	printf("���������ѧ����ѧ�ţ�");
	scanf("%d",&ptr->num);
	getchar();
 
	printf("���������ѧ����������");
	scanf("%s",namestu);
	getchar();
	p = namestu;
	strcpy(ptr->name,p);
 
	printf("���������ѧ���Ŀ�Ŀ1���ƣ�");
	scanf("%s",&subname1);
	getchar();
	p = subname1;
	strcpy(ptr->subject[0].name,p);
 
	printf("���������ѧ���Ŀ�Ŀ1�ɼ���");
	scanf("%f",&ptr->subject[0].score);
	getchar();
 
	printf("���������ѧ���Ŀ�Ŀ2���ƣ�");
	scanf("%s",&subname2);
	getchar();
	p = subname2;
	strcpy(ptr->subject[1].name,p);
 
	printf("���������ѧ���Ŀ�Ŀ2�ɼ���");
	scanf("%f",&ptr->subject[1].score);
	getchar();
 
	printf("���������ѧ���Ŀ�Ŀ3���ƣ�");
	scanf("%s",&subname3);
	getchar();
	p = subname3;
	strcpy(ptr->subject[2].name,p);
 
	printf("���������ѧ���Ŀ�Ŀ3�ɼ���");
	scanf("%f",&ptr->subject[2].score);
	getchar();
	
	putchar('\n');
	return head;
}
 
//ɾ��ѧ��
pstu DeleStu(pstu x)   
{
	int num;
	pstu head,ptr,qtr;
	
	head = x;
	ptr = head->next;
	qtr = head;
 
	printf("������Ҫɾ����ѧ����ѧ�ţ�");
	scanf("%d",&num);
	getchar();
 
	while(ptr!=NULL)
	{
		if( ptr->num != num)				//�������������㣬δ�ҵ������ý��
		{
			ptr = ptr->next;
			qtr = qtr->next;
		}
		else						//�ҵ���ɾ�����
		{
			ptr = ptr->next;
			qtr->next = ptr;
			break;
		}
	}
	
	printf("��ѧ����Ϣ��ɾ����\n\n");
	return head;
}
 
//�޸�ѧ����Ϣ
pstu RwrStu(pstu x)   
{
	char namestu[20];
	char *p;
	char subname1[20],subname2[20],subname3[20];
	int num;
	pstu head,ptr;
	
	head = x;
	ptr = head->next;
 
	printf("������Ҫ�޸ĵ�ѧ����ѧ�ţ�");
	scanf("%d",&num);
	getchar();
 
	while(ptr!=NULL)
	{
		if( ptr->num == num )
		{
			printf("���ҵ���ѧ����Ϣ���������޸���Ŀ��");
 
			printf("�������޸�ѧ����������");
			scanf("%s",namestu);
			getchar();
			p = namestu;
			strcpy(ptr->name,p);
 
			printf("�������޸�ѧ���Ŀ�Ŀ1���ƣ�");
			scanf("%s",subname1);
			getchar();
			p = subname1;
			strcpy(ptr->subject[0].name,p);
 
			printf("�������޸�ѧ���Ŀ�Ŀ1�ɼ���");
			scanf("%f",&ptr->subject[0].score);
			getchar();
 
			printf("�������޸�ѧ���Ŀ�Ŀ2���ƣ�");
			scanf("%s",subname2);
			getchar();
			p = subname2;
			strcpy(ptr->subject[1].name,p);
 
			printf("�������޸�ѧ���Ŀ�Ŀ2�ɼ���");
			scanf("%f",&ptr->subject[1].score);
			getchar();
 
			printf("�������޸�ѧ���Ŀ�Ŀ3���ƣ�");
			scanf("%s",subname3);
			getchar();
			p = subname3;
			strcpy(ptr->subject[2].name,p);
 
			printf("�������޸�ѧ���Ŀ�Ŀ3�ɼ���");
			scanf("%f",&ptr->subject[2].score);
			getchar();
 
			printf("��ѧ����Ϣ���޸ģ�\n\n");
			break;
		}
		else
		{
			ptr = ptr->next;
		}
	}
	
	return head;
}
 
//����ѧ��������Ϊ����ָ�룬��ѧ��ѧ��
//���ã�Ӧ�ý�ѧ������Ž��Ӻ��������������ṹ�������Ӻ�������
void FindStu(pstu x,char y)    
{
	pstu head,ptr;
	
	head = x;
	ptr = head->next;
	
	while( ptr != NULL)
	{
		if( ptr->num == (int)y)		//����������Ϊ��ʡ�ռ䣬ѧ���������char���ݣ���ǿ��׼��
		{
			printf("���ҵ���ѧ����Ϣ!\n���£�");
			printf("%03d  %s  %s  %5.2f  %s  %5.2f  %s  %5.2f\n",
				ptr->num,ptr->name,ptr->subject[0].name,ptr->subject[0].score,ptr->subject[1].name,ptr->subject[1].score,ptr->subject[2].name,ptr->subject[2].score);			break;			//ע��˴��ҵ��������Ϣ��Ҫ�ֶ��˳�ѭ��
		}
		else
		{
			ptr = ptr->next;
		}
	}
	if( ptr == NULL )				//��ѯ�ɹ���⣬whileѭ�������ҵ�����ptrͣ���ڵ�ǰѧ���Ľ����
	{
		printf("δ���ҵ���ѧ����Ϣ��\n");
	}
}
 
 
//ͳ�ƿ�Ŀ��������ε�ѧ��,����Ϊ����ָ�룬��Ŀ���ƣ���������������
//ͬ��������¼��Ӧ�����Ӻ������򻯽ṹ�ͱ��
void Count(pstu x,char *y,float q,float p)    
{
	pstu head,ptr;
	char name[20];
	char flag=0;       			//�ֶ����õĲ��ҽ��flag
	
	head = x;
	ptr = head->next;
	strcpy(name,y);
	
	//printf("%s %5.2f %5.2f\n",name,q,p); 	//�����������Ĵ��ݣ����Գ�����
 
	while( ptr != NULL)			//��ʼ����ͳ�ƣ���Ŀ������strcmp�����ȽϿ�Ŀ�ַ���,����ֵ0Ϊ�ַ������
	{															//�˴�whileѭ�����У��ظ��Ĳ��Ҳ���̫�࣬Ӧ���ÿ�Ŀƥ��flag������rank()����
		if( strcmp(name,ptr->subject[0].name) == 0 )	 //ͨ��flag����Ŀȷ�Ϸ���while֮�⣬ѭ������ֻ�����������ɨ������
		{
			if( q <= ptr->subject[0].score && ptr->subject[0].score<= p )
			{
				printf("%03d  %s  %s  %5.2f\n",ptr->num,ptr->name,ptr->subject[0].name,ptr->subject[0].score);
				flag++;
			}
		}
		if( strcmp(name,ptr->subject[1].name) == 0 )
		{
			if( q <= ptr->subject[1].score && ptr->subject[1].score<= p )
			{
				printf("%03d  %s  %s  %5.2f\n",ptr->num,ptr->name,ptr->subject[1].name,ptr->subject[1].score);
				flag++;
			}
		}
		if( strcmp(name,ptr->subject[2].name) == 0 )
		{
			if( q <= ptr->subject[2].score && ptr->subject[2].score<= p )
			{
				printf("%03d  %s  %s  %5.2f\n",ptr->num,ptr->name,ptr->subject[2].name,ptr->subject[2].score);
				flag++;
			}
		}
		
		ptr = ptr->next;
	}
 
	if(flag==0)
	{
		printf("δ���ҵ��ÿγ̸���������ε�ѧ����\n");
	}
}
 
 
//ѧ�Ƴɼ�����,���ý������ݵķ���,����Ϊ����ָ�룬��Ŀ����
//ͬ���������
//�����������⣬�˴��ý���������ݷ��������������������򷽷�
//�磬������㣬����ָ����������(δʵ�֣����̷���)�����뷨�����
void Rank(pstu x,char *y)     
{
	pstu head,ptr,qtr;
	char name[20];
	char len=0;
	char flag=0;    				//���㷨,���ÿ�Ŀ���ҽ���ж�ֵ,flag=0��ʾ��Ŀ����Ϊδ֪��Ŀ��������
	int i=0;													//i��jѭ���������Ʋ���
	int j=0;  
	char temp_name[20];			//���ݽ���ʱ���ݴ���Ϣ����
	float temp0,temp1,temp2;
	int temp_num;
 
	strcpy(name,y);
	head = x;
 
	ptr = head->next;
	while( ptr != NULL)   			//��������,��������ͷ���
	{
		ptr = ptr->next;
		len++;
	}
	ptr = head->next;  			//ָ��ptr�ù�֮��ǵû�ԭλ
				
 
	//��ʼ���ҿ�Ŀ
	if( strcmp(name,ptr->subject[0].name) == 0)	flag=1; 
	if( strcmp(name,ptr->subject[1].name) == 0)	flag=2;
	if( strcmp(name,ptr->subject[2].name) == 0)	flag=3;
	if( flag == 0)
	{
		printf("δ�ҵ��ÿ�Ŀ!");
		return;
	}
	
	//��ʼ����,ð�ݷ��Ƚϸ��������
	//�˴�3�����е�if��switch case�������ṹ
	if( n == 1 )
	{
		for( i=0;i<len;i++)
		{
			ptr = head->next->next;	//ÿһ����ѭ��֮��ptr��qtr��Ȼ����������ڵ���
			qtr = head->next;		//���ڽ�����ѭ��֮ǰ��Ҫ���¸�λptr��qtr
			for( j=0;j<len-i-1;j++)
			{
				if( qtr->subject[0].score < ptr->subject[0].score )
				{
					temp_num = qtr->num;	//��������,�����ݸ�ʽ(��Ŀ˳��)��ȷ�涨���ʲ�������Ŀ���Ƶ��滻
					strcpy(temp_name,qtr->name);
					temp0 = qtr->subject[0].score;
					temp1 = qtr->subject[1].score;
					temp2 = qtr->subject[2].score;
					
					qtr->num = ptr->num;
					strcpy(qtr->name,ptr->name);
					qtr->subject[0].score = ptr->subject[0].score;
					qtr->subject[1].score = ptr->subject[1].score;
					qtr->subject[2].score = ptr->subject[2].score;
					
					ptr->num = temp_num;
					strcpy(ptr->name,temp_name);
					ptr->subject[0].score = temp0;
					ptr->subject[1].score = temp1;
					ptr->subject[2].score = temp2;
				}
				qtr = qtr->next;
				ptr = ptr->next;
			}
		}
	}
	
	if( n == 2 )
	{
		for( i=0;i<len;i++)
		{
			ptr = head->next->next;
			qtr = head->next;
			for( j=0;j<len-i-1;j++)
			{
				if( qtr->subject[1].score < ptr->subject[1].score )
				{
					temp_num = qtr->num;
					strcpy(temp_name,qtr->name);
					temp0 = qtr->subject[0].score;
					temp1 = qtr->subject[1].score;
					temp2 = qtr->subject[2].score;
					
					qtr->num = ptr->num;
					strcpy(qtr->name,ptr->name);
					qtr->subject[0].score = ptr->subject[0].score;
					qtr->subject[1].score = ptr->subject[1].score;
					qtr->subject[2].score = ptr->subject[2].score;
					
					ptr->num = temp_num;
					strcpy(ptr->name,temp_name);
					ptr->subject[0].score = temp0;
					ptr->subject[1].score = temp1;
					ptr->subject[2].score = temp2;
				}
				qtr = qtr->next;
				ptr = ptr->next;
			}
		}
	}
	
	if( n == 3 )
	{
		for( i=0;i<len;i++)
		{
			ptr = head->next->next;
			qtr = head->next;
			for( j=0;j<len-i-1;j++)
			{
				if( qtr->subject[2].score < ptr->subject[2].score )
				{
					temp_num = qtr->num;
					strcpy(temp_name,qtr->name);
					temp0 = qtr->subject[0].score;
					temp1 = qtr->subject[1].score;
					temp2 = qtr->subject[2].score;
					
					qtr->num = ptr->num;
					strcpy(qtr->name,ptr->name);
					qtr->subject[0].score = ptr->subject[0].score;
					qtr->subject[1].score = ptr->subject[1].score;
					qtr->subject[2].score = ptr->subject[2].score;
					
					ptr->num = temp_num;
					strcpy(ptr->name,temp_name);
					ptr->subject[0].score = temp0;
					ptr->subject[1].score = temp1;
					ptr->subject[2].score = temp2;
				}
				qtr = qtr->next;
				ptr = ptr->next;
			}
		}
	}
 
	//���������������
	ptr = head->next;
	while( ptr != NULL )
	{
		printf("%03d  %s  %s  %5.2f  %s  %5.2f  %s  %5.2f\n",
			  ptr->num,ptr->name,ptr->subject[0].name,ptr->subject[0].score,
			  ptr->subject[1].name,ptr->subject[1].score,
			  ptr->subject[2].name,ptr->subject[2].score);
		ptr = ptr->next;
	}
}
 
 
//�����ļ����˳����ļ�����
void SaveQuit(pstu x)    
{
	pstu head,ptr;
	FILE *fp;
	char filename[] = "D:\\���ѧϰ\\���ʵ��\\c���Կγ����1 ѧ����Ϣ����\\data.txt";
	head = x;
	ptr = head->next;
 
	if( NULL == (fp = fopen(filename,"w")) ) 			//�ж��ļ��Ƿ���ڼ��ɶ�
	{ 
		printf("error!"); 
		exit(0); 
	} 
	
	while(ptr != NULL)						//���������㣬��dataԼ����ʽ�������
	{
		fprintf(fp,"%03d  %s  %s  %5.2f  %s  %5.2f  %s  %5.2f\r",
			ptr->num,ptr->name,ptr->subject[0].name,ptr->subject[0].score,
			ptr->subject[1].name,ptr->subject[1].score,
			ptr->subject[2].name,ptr->subject[2].score);			
		ptr = ptr->next;
	} 
	
    fclose(fp);    
}
