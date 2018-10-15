#ifndef __GAME_H__
#define __GAME_H__

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

#define N 1000

void gotoxy(int x, int y);
void colorxy(int x, int y);
void hanoi(int n,char a,char b,char c);
void move(int n,char a,char b);
void Print();
void Printpan(int n);
int a1=0,a2=0,a3=0;


#endif //__GAME_H__