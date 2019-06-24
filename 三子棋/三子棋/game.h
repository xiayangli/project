#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3 //行
#define COL 3 //列

void Arr_init(char arr[ROW][COL], int row, int col); //数组初始化
void Print_che(char arr[ROW][COL], int row, int col);//打印棋盘
void Player_go(char arr[ROW][COL], int row, int col);//玩家走
void Computer_go(char arr[ROW][COL], int row, int col);//电脑走
char Judge_Q(char arr[ROW][COL], int row, int col);//判断输赢