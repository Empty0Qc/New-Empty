
void game()
{
	int ret = 0;
	int num = 0;
	ret = rand()%100;
	while(1)
	{
		printf("�������:>");
		scanf_s("%d",&num);
		if(num>ret)
		{
		printf("�´���\n");
		}
		else if(num<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�����ڲ¶���\n");
			break;
		}	
	}
	printf("%d\n",ret);

}

void menu()
{ 
	printf("*************************\n");
	printf("*****    1. play    *****\n");
	printf("*****    0.exit     *****\n");
	printf("*************************\n");
}
int main()
{
	int input = 0;
    srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch(input)
		{
		case 1:
            printf("����Ϸ\n");
			game();
			break;
		case 0:
            printf("�˳���Ϸ\n");
			break;
        default:
			printf("ѡ�����\n");
			break;		
		}
	}
	while(input);
	return 0;
}