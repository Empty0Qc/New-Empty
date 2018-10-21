#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>//hanoi汉诺塔
#include<windows.h>
#define N 1000
void gotoxy(int x, int y);
void colorxy(int x, int y);
void hanoi(int n,char a,char b,char c);
void move(int n,char a,char b);
void Print();
void Printpan(int n);
int a1=0,a2=0,a3=0;
int main()
{
    int n=3;
    char a='A',b='B',c='C';
    colorxy(0x0b,0x0b);
    printf("Please input n(0~9):");
    scanf("%d",&n);
	a1=n;
    Print();
    gotoxy(0,11-n);
    Printpan(n);
    Sleep(500);
    gotoxy(0,12);
	hanoi(n,a,b,c);// 把n个盘借助C，A-->B
    return 0;
}
void gotoxy(int x, int y)
{
   COORD coord = {x, y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void colorxy(int x, int y)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, x|y);
}
void hanoi(int n,char a,char b,char c)
{
    if(n==1)
        move(n,a,b);//把盘n，A-->B
    else
    {
        hanoi(n-1,a,c,b);//把盘n上的n-1个盘借助B，A-->C
        move(n,a,b);//把盘n，A-->B
        hanoi(n-1,c,b,a);//把n-1个盘借助A，C-->B
    }
}
void move(int n,char a,char b)
{
    int static count=1;
 
    int j;
    switch(a)
    {
    	case 'A':a1--;gotoxy(21+n,10-a1);
    	for(j=0;j<n*2;j++)printf(" \b\b");//删掉将要移走的盘
    	gotoxy(22,10-a1);colorxy(0x0a,0x0c);printf("|");//把删掉的|加上
		break;
    	case 'B':a2--;gotoxy(38+n,10-a2);
    	for(j=0;j<n*2;j++)printf(" \b\b");//删掉将要移走的盘
    	gotoxy(39,10-a2);colorxy(0x0a,0x0c);printf("|");//把删掉的|加上
		break;
    	case 'C':a3--;gotoxy(55+n,10-a3);
    	for(j=0;j<n*2;j++)printf(" \b\b");//删掉将要移走的盘
    	gotoxy(56,10-a3);colorxy(0x0a,0x0c);printf("|");//把删掉的|加上
		break;
    }
    gotoxy(15,13);
    printf("%3d.    move %d, %c-->%c\n",count++,n,a,b);
    switch(b)
    {
    	case 'A':gotoxy(23-n,10-a1);a1++;
    	colorxy(0x0a,0x0a);
    	for(j=0;j<n*2-1;j++)
		printf("=");gotoxy(0,22);Sleep(N);
		break;
    	case 'B':gotoxy(40-n,10-a2);a2++;
    	colorxy(0x0a,0x0a);
    	for(j=0;j<n*2-1;j++)
		printf("=");gotoxy(0,22);Sleep(N);
		break;
    	case 'C':gotoxy(57-n,10-a3);a3++;
    	colorxy(0x0a,0x0a);
    	for(j=0;j<n*2-1;j++)
		printf("=");gotoxy(0,22);Sleep(N);
		break;
		//colorxy(0x06,0x06);
    }
 
}
void Print()
{
	printf("\n\n");
	colorxy(0x0a,0x0c);
    printf("\t\t      |                |                |     \n");
    printf("\t\t      |                |                |     \n");
    printf("\t\t      |                |                |     \n");
    printf("\t\t      |                |                |     \n");
    printf("\t\t      |                |                |     \n");
    printf("\t\t      |                |                |     \n");
    printf("\t\t      |                |                |     \n");
    printf("\t\t      |                |                |     \n");
    printf("\t\t -----A-----      -----B-----      -----C-----\n");
    colorxy(0x0c,0x0c);gotoxy(22,11);printf("A");
    gotoxy(39,11);printf("B");
    gotoxy(56,11);printf("C");
    colorxy(0x0a,0x0a);
}
void Printpan(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
    {
        for(j=1;j<=23-i;j++)
            printf(" ");
        for(j=1;j<=i*2-1;j++)
            printf("=");
        printf("\n");
    }
}
