#include "hand.h"

//��ӡ���˵�
void PrintMenu()    
{
	printf("***************************************\n");
	printf("             ѧ����Ϣ����ϵͳ          \n");
	printf("***************************************\n");
	putchar('\n');
	printf("�˵�\n");
	printf("\025 1����Ϣ����\n");
	printf("\025 2����Ϣ��ѯ\n");
	printf("\025 3���ɼ�ͳ��\n");
/*	printf("\025 4���ɼ�����\n");*/	
	printf("\025 5�������˳�\n");
}

int Project()
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
		//case 4:
		//	{
		//		//�ɼ�����
		//		system("cls");
		//		printf("��ӭ����ɼ������飬�������Ŀ��");
		//		scanf("%s",&subname);
		//		getchar();
		//		Rank(head,subname);  			//�������
		//		printf("\n������س����������˵���\n");
		//		getchar();
		//		system("cls");
		//		break;
		//	}
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
		printf("�û���>:");
		scanf("%s",input1);
		if(!strcmp("���",input1)||!strcmp("root",input1))
		{
			printf("����>:");
			scanf("%s",input2);
			if((!strcmp("���",input1)&&!strcmp("123456",input2))||(!strcmp("root",input1)&&!strcmp("root",input2)))
			{
				Project();
				break;
			}
			else
				printf("�������!\n");
		}
		else
			printf("�û�������!\n");
	}
	return 0;
}