#include "game.h"

void menu()
{
   	printf("----------------------- \n");
	printf("|      扫雷小游戏     |\n");
	printf("-----------------------\n");
	printf("|       1.play        |\n");
	printf("|       0.exit        |\n");
	printf("-----------------------\n");

}

void menu2()
{
	printf("------------------\n");
	printf("|    1. 初级     |\n");
	printf("|    2. 中级     |\n");
	printf("|    3. 噩梦     |\n");
	printf("------------------\n");
}

void game()
{
	int input2 = 0;
	int diff = 0;
	//创建棋盘，雷盘
	char mine[ROWS][COLS] ={0};
	char show[ROWS][COLS] ={0};
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	/*DisplayBoard(mine,ROW,COL);*/
	DisplayBoard(show,ROW,COL);
	menu2();
	printf("请选择难度>:");
	scanf("%d",&input2);
	switch(input2)
	{
	case 1 :
		diff = ROW*COL/ROW;
		break;
	case 2 :
		diff = ROW*COL/4;
		break;
	case 3 :
		diff = ROW*COL/2;
		break;
	default:
		printf("选择错误，默认为初级难度\n");
		diff = ROW*COL/ROW;
		break;
	}
	SetMine(mine,ROW,COL,diff);
	FindMine(mine,show,ROW,COL,diff);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("你选错了，重输！\n");
			break;
		}
	}while(input);
	return 0;
}