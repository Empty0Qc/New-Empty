#include "hand.h"
char n;

//����data���� ���ļ�����
pstu LoadInfo()
{
	int   num;
	char name[20];
	char sub1[20];
	char sub2[20];
	float score1;
	float score2;
	
	char filename[] = "C:\\Users\\Administrator\\Desktop\\New Code\\GitHub\\New-Empty\\ѧ����Ϣ����\\ѧ����Ϣ����.txt";  //�ļ���,�˴�Ϊ�򻯱�̣����ù̶���ַ���ƣ�δ������
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
		fscanf(fp,"%d %s %s %f %s %f\n",&num,&name,
			  &sub1,&score1,&sub2,&score2); //��ȡһ�У����ø�ʽ����ȡ���������������ֶ�ȡ���������ݴ�������
																//�÷���ȱ�����ԣ������ݸ�ʽҪ����У���data�ļ��涨���ݸ�ʽ
		ptr->next = (pstu)malloc(SIZE);  //ѧ���ṹ��Ĵ�С
		ptr = ptr->next;
		ptr->next = NULL;
		
		ptr->num = num;
		strcpy(ptr->name,name);
		strcpy(ptr->subject[0].name,sub1);
		ptr->subject[0].score = score1;
		strcpy(ptr->subject[1].name,sub2);
		ptr->subject[1].score = score2;
		
	} 
	
    fclose(fp);                     					//�ر��ļ�,�ѵõ�����data��Ϣ������head
	
	return head;
}
 
 

 
//���ѧ��
pstu AddStu(pstu x)  
{
	char namestu[20];
	char *p;
	char subname1[20],subname2[20];
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
	char subname1[20],subname2[20];
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
			printf("%03d  %s  %s  %5.2f  %s  %5.2f\n",
				ptr->num,ptr->name,ptr->subject[0].name,ptr->subject[0].score,ptr->subject[1].name,ptr->subject[1].score);			
			break;			//ע��˴��ҵ��������Ϣ��Ҫ�ֶ��˳�ѭ��
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
		ptr = ptr->next;
	}
 
	if(flag==0)
	{
		printf("δ���ҵ��ÿγ̸���������ε�ѧ����\n");
	}
}
 
 
//�����ļ����˳����ļ�����
void SaveQuit(pstu x)    
{
	pstu head,ptr;
	FILE *fp;
	char filename[] = "C:\\Users\\Administrator\\Desktop\\New Code\\GitHub\\New-Empty\\ѧ����Ϣ����\\ѧ����Ϣ����.txt";
	head = x;
	ptr = head->next;
 
	if( NULL == (fp = fopen(filename,"w")) ) 			//�ж��ļ��Ƿ���ڼ��ɶ�
	{ 
		printf("error!"); 
		system("pause");
		exit(0); 
	} 
	
	while(ptr != NULL)						//���������㣬��dataԼ����ʽ�������
	{
		fprintf(fp,"%03d  %s  %s  %5.2f  %s  %5.2f\r\n",
			ptr->num,ptr->name,
			ptr->subject[0].name,ptr->subject[0].score,
			ptr->subject[1].name,ptr->subject[1].score);			
		ptr = ptr->next;
	} 
	
    fclose(fp);    
		system("pause");
}
