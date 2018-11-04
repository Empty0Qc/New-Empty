#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student *temp;
struct student *head;

struct student
{
    int num;
    char name[6];
    int yw;
    int sx;
    int yy;
    struct student*next;
};

int menu();
void login();
struct student* luru();
void cr(struct student *h);
struct student*cc();
int menu1();
void paxu();
void px1();
void px2();
void px3();
void px4();
void sanch();
void tj();
void xg();
void fx();