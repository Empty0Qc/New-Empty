#include "hand.h"

enum
{
	
	ADD = 1,
	DEL,
	MODIFY,
	FIND,
	PRINT,
	CLEAR,
	NAMERANK,
	EXIT,
};

int main()
{
	int choice = 8;
	char password[1024];
	printf(" ￣ω￣= \n");
	printf("请输入通讯录启动密码>:");
	scanf("%s",password);
	if (strcmp(password,"gongxini") != 0)
	{
		printf("密码错误!\n");
		goto flag;
	}
	PersonInfo();
	do 
	{
		choice = menu();
		switch(choice)
		{	
		case ADD:
			{
				add_person();
				break;
			}
		case DEL:
			{
				del_person();
				break;
			}
		case MODIFY:
			{
				mod_person();
				break;
			}
		case FIND:
			{
				find_person();
				break;
			}
		case PRINT:
			{
				print_person();
				break;
			}
		case CLEAR:
			{
				clear_person();
				break;
			}
		case NAMERANK:
			{
				rank_person();
				break;
			}
		case EXIT:
			{
flag:
				printf("Good bye!\n");
				break;
			}
		default:
			{
				printf("选择错误!\n");
				break;
			}
		}
	}while(choice != EXIT);
	
	return 0;
}