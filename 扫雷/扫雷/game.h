#ifndef __GAME_H__
#define __GAME_H__

#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

void InitBoard(char arr[ROWS][COLS],int row,int col,char set);
void DisplayBoard(char arr[ROWS][COLS],int row,int col);
void DisplayBoard1(char arr[ROWS][COLS],int row,int col);
void SetMine(char arr[ROWS][COLS],int row,int col,int diff);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col,int diff);
int GetMineCount(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y);
int MuchMine(char mine[ROWS][COLS],int x,int y);
void Ass(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y,int *Num);
int IsWin(char show[ROWS][COLS],int row,int col,int diff);

#endif //__GAME_H__