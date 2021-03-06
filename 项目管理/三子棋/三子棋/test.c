#include "game.h"
void menu()
{
	printf("                   \n");
	printf("    三子棋小游戏   \n");
	printf("       1. play     \n");
	printf("       0. exit     \n");
	printf("                   \n");
}
void game()
{
	char board[ROW][COL] = {0};//创建二维数组
	char ret = '0';
	InitBoard(board,ROW,COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘
	do
	{
		printf("-----------\n");
		printf("电脑走:\n");
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);

		if (ret = IsWin(board, ROW, COL) != ' ')
		{
			break;
		}
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);		
		ret = IsWin(board, ROW, COL);
	}while(ret == ' ');
	if (IsWin(board, ROW, COL) == 'q')
	{
		printf("平局！\n");
	}
	else if (IsWin(board, ROW, COL) == '#')
	{
		printf("恭喜玩家赢！\n");
	}
	else if (IsWin(board, ROW, COL) == '+')
	{
		printf("恭喜电脑赢！\n");
	}
}
int main()
{
	int input = 0;
	system("color f0");
    do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误");
			break;
		}
	}while(input);
	return 0;
}