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
	int choice = 0	;

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
				printf("Good bye!\n");
				break;
			}
		default:
			{
				printf("Ñ¡Ôñ´íÎó!\n");
				break;
			}
		}
	}while(choice != EXIT);
	
	return 0;
}