#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	memset(board,' ',row*col*sizeof(board[0][0]));
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i = 0;i < row;i++)
	{	
		int j = 0;
		for(j=0; j<row-1; j++)
		{
			printf(" %c |",board[i][j]);
		}
		printf(" %c \n",board[i][row-1]);	
		if(i != row-1)		
		{	int j = 0;
			for(j=0; j<row-1; j++)
			{
				printf("---|");
			}
			printf("---\n");
		}		
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{	
	int x = 0;
	int y = 0;
	printf("玩家走");
	while(1)
	{
		printf("请选择>:");
		scanf("%d%d",&x,&y);
		if((x>=1)&&(x<=row)&&(y>=1)&&(y<=col))
		{
			if(board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '#';
				break;
			}
			else
				printf("坐标有误\n");
		}
		else
			printf("坐标有误\n");
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while(1)
	{
		x = rand() % row;
		y = rand() % col;
		if(board[x][y] == ' ')
		{
			board[x][y] = '+';
			break;
		}
	}
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int t = 0;
	int d = 0;
	char set = '0';
	for(i=0; i<row; i++)
	{
		for(t=0; t<row-2; t++)
		{
			if(board[i][t] == board[i][t+1] && board[i][t+1] == board[i][t+2] && board[i][t] != ' ')
				return set=board[i][0];
		}
		/*if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][0];*/
	}
	for(j=0; j<col; j++)
	{
		for(t=0; t<col-2; t++)
		{
			if(board[t][j] == board[t+1][j] && board[t+1][j] == board[t+2][j] && board[t+1][j] != ' ')
				return set=board[t+1][j];
		}
		/*if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return board[1][j];*/
	}
	for(t=0; t<row-2; t++)
	{
		if(board[t+d][t+d] == board[d+t+1][d+t+1] && board[t+d+1][t+d+1] == board[t+d+2][t+d+2] && board[t+d+1][t+d+1] != ' ')
			return set=board[t+d+1][t+d+1];
	}
	/*if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];*/
	d = 0;
	for(t=0; t<row-2; t++)
	{
		if(board[t][row-1-t] == board[t+1][row-2-t] && board[t+1][row-2-t] == board[t+2][row-3-t] && board[t+1][row-2-t] != ' ')
			return set=board[t+1][row-2-t];
	}
	/*else if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];*/
	if(set != '#' && set != '+')
	{
		if(IsFull(board,ROW,COL))
			return 'q';
			
	}
	return ' ';
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
