#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1000

enum
{
	EXIT,
	ADD,
	DEL,
	MODIFY,
	FIND,
	PRINT,
	CLEAR,
	NAMERANK,
};

void menu()
{
	printf("---------------------\n");
	printf("1.ADD\n");
	printf("2.DEL\n");
	printf("3.MODIFY\n");
	printf("4.FIND\n");
	printf("5.PARINT\n");
	printf("6.CLEAR\n");
	printf("7.NAMERANK\n");
	printf("0.EXIT\n");
	printf("---------------------\n");
}
typedef struct Person {
	char name[1024];
	char tel[1024];
}Person;

typedef struct AddressBook {
	Person person[SIZE];
	int size;
}addressBook;
void PersonInfo() {
	int i = SIZE;
}
int main()
{
	int input = 1;
	do 
	{
		menu();
		printf("ÇëÊäÈëÑ¡Ôñ>:");
		scanf("%d",&input);
		switch(input)
		{	
		case ADD:
			{
				break;
			}
		case DEL:
			{
				break;
			}
		case MODIFY:
			{
				break;
			}
		case FIND:
			{
				break;
			}
		case PRINT:
			{
				break;
			}
		case CLEAR:
			{
				break;
			}
		case NAMERANK:
			{
				break;
			}
		case EXIT:
			{
				printf("Good bye!\n");
				break;
			}
		default:
				break;
		}
	}while(input);
	
	return 0;
}