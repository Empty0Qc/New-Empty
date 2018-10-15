#include "game.h"

char show2[ROWS][COLS];
void menu3()
{
	printf("-------------------------\n");
	printf("|         1.排雷        |\n");
	printf("|         2.加标记      |\n");
	printf("|         3.消标记      |\n");
	printf("-------------------------\n");
}

void sign(char show[ROWS][COLS],char show2[ROWS][COLS],char set)
{
	int x = 0;
	int y = 0;
	if(set == 'x')
	{
		printf("请输入要标记位置>:");
		scanf("%d%d",&x,&y);
		if(x>=1 && x<= ROW && y>=1  && y<= COL)
		{
			if(show[x][y] == '*')
				show2[x][y] = '#';
			else
				printf("标记错误!\n");
		}
		else
			printf("输入坐标位置有误!\n");
	}
	else if(set == 'y')
	{
		printf("请输入要取消的标记位置>:");
		scanf("%d%d",&x,&y);
		if(x>=1 && x<= ROW && y>=1  && y<= COL)
		{
			if(show2[x][y] == '#')
				show2[x][y] = '*';
			else
				printf("取消标记错误!\n");
		}
		else
			printf("输入坐标位置有误!\n");
	}

}
void InitBoard(char arr[ROWS][COLS],int row,int col,char set)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			arr[i][j] = set;
		}
	}
	//memset(arr,set,ROWS*COLS*sizeof(arr[0][0]));
}

void InitBoard1(char arr1[ROWS][COLS],char arr2[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(arr2[i][j] != '#')
				arr2[i][j] = arr1[i][j];
		}
	}
	//memset(arr,set,ROWS*COLS*sizeof(arr[0][0]));
}
void DisplayBoard(char arr[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	system("CLS");
	printf("       扫雷        \n");
	printf("-------------------\n");
	for(i=0; i<=col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1; i<=row; i++)
	{
		printf("%d ",i);
		for(j=1; j<=col; j++)
		{
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
}
void DisplayBoard1(char arr[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	printf("       扫雷        \n");
	printf("-------------------\n");
	for(i=0; i<=col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1; i<=row; i++)
	{
		printf("%d ",i);
		for(j=1; j<=col; j++)
		{
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char arr[ROWS][COLS],int row,int col,int diff)
{
	int x = 0;
	int y = 0;
	
	while(diff)
	{
		x = rand()%row+1;
		y = rand()%col+1;
		if(arr[x][y] == '0')
		{
			arr[x][y] = 1+'0';
			diff--;
		}
	}
}

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col,int diff)
{
	int x = 0;
	int y = 0;
	int input3 = 0;
	int safenum = 0;
	menu3();
	printf("请选择>:");
	scanf("%d",&input3);
	switch(input3)
	{
	case 2:
		sign(show,show2,'x');
		system("CLS");
		InitBoard1(show,show2,ROWS,COLS);
		DisplayBoard(show2, ROW, COL);
		FindMine(mine,show,ROW,COL,diff);
		break;
	case 3:
		sign(show,show2,'y');
		system("CLS");
		InitBoard1(show,show2,ROWS,COLS);
		DisplayBoard(show2, ROW, COL);
		FindMine(mine,show,ROW,COL,diff);
	case 1:
		break;
	default:
		printf("选择错误，默认进入排雷选项!\n");
		break;
	}
	do	
	{
		printf("请输入要排除的位置>:");
		scanf("%d%d",&x,&y);
		
		if (x>=1 && x<= row && y>=1  && y<= col)
		{
			if (mine[x][y] == '1')
			{
				if (!safenum)//是否是第一次扫雷
				{
					mine[x][y] = '0';
					SetMine(mine, ROW, COL, 1);
					Ass(mine, show, x, y, &safenum);//如果第一次扫到雷，避免第一次被炸死，将1变成0，并且将一个雷重新随机生成到mine里边去，让雷的数量不变。
				    InitBoard1(show,show2,ROWS,COLS);
					DisplayBoard(show2, ROW, COL);
					FindMine(mine,show,ROW,COL,diff);
				}
				else
				{
					printf("很抱歉，你被炸死了！\n");
					DisplayBoard1(mine, ROW, COL);
					return;
				}
			}
			else
			{
				Ass(mine, show, x, y, &safenum);
				InitBoard1(show,show2,ROWS,COLS);
				DisplayBoard(show2, ROW, COL);
				FindMine(mine,show,ROW,COL,diff);
			}
		}
		else
			printf("请重新输入>:");
	}while(IsWin(show,row,col,diff)-diff);
	printf("你赢了！恭喜！！\n");
}
int IsWin(char show[ROWS][COLS],int row,int col,int diff)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=col; j++)
		{
			if(show[i][j] == '*')
				sum++;
		}
	}
	return sum;
}
int MuchMine(char mine[ROWS][COLS],int x,int y)
{
	return  mine[x-1][y-1] + mine[x-1][y] +  mine[x-1][y+1]+ 
            mine[x][y-1]   +                 mine[x][y+1]  + 
		    mine[x+1][y-1] + mine[x+1][y] +  mine[x+1][y+1]- 8 * '0';
}
void Ass(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y,int *Num)
{
	int i = 0;	
	int j = 0;
	int AroundCount = 0;
	if(x>0 && x<=ROW && y>0 && y<=COL){
		if (!MuchMine(mine,x,y))
		{
			(*Num)++;
			show[x][y] = '0';
			for (i = -1; i <= 1; i++)
			{
				for (j = -1; j <= 1; j++)
				{
					if (x + i >= 1 && x + i <= ROW && y + j >= 1 && y + j <= COL)
					{
						if (i != 0 || j != 0)
						{
							if(show[x+i][y+j] != '0')
								Ass(mine, show, x + i, y + j,Num);//对此坐标周围的八个坐标依次判断是否为0，只要有0，继续在相应的坐标判断并且扫雷，直到没有坐标等于0为止。
						}                                               //这也是递归的思想。
					}
				}
			}
		}
		else
		{
			(*Num)++;
			show[x][y] = MuchMine(mine,x,y) + '0';
		}
	}
}