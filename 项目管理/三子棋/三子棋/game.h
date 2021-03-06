#ifndef __GAME_H__
#define __GAME_H__

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define ROW 10
#define COL 10

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);

//IsWin
//'#'-玩家赢
//'+'-电脑赢	
//'q'-平局
//' '-继续
char IsWin(char board[ROW][COL], int row, int col);

#endif //__GAME_H__