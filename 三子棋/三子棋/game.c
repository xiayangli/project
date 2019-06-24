#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void Arr_init(char arr[ROW][COL], int row, int col)//数组初始化
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void Print_che(char arr[ROW][COL], int row, int col)//打印棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
				printf("___");
			else
				printf("   ");
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
	}
}
void Player_go(char arr[ROW][COL], int row, int col)//玩家走
{
	int x, y;
	printf("玩家走\n");
	while (1)
	{
		printf("玩家请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (((x > 0) && (x <= row)) && ((y > 0) && (y <= col)))
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = 'X';
				break;
			}
			else
				printf("该坐标已有棋，请重新输入:>\n");
		}
		else
			printf("输入错误，请重新输入：>\n");
	}
}
void Computer_go(char arr[ROW][COL], int row, int col)//电脑走
{
	int x, y;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % row;//生成随机数
		y = rand() % col;
		if (arr[x][y] == ' ')
		{
			arr[x - 1][y - 1] = 'O';
			break;
		}
	}
}
char Judge_Q(char arr[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	int count = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			count = 0;
			if ((arr[i][j] == arr[i][j + 1]) && (arr[i][j] != ' '))//行相等
				count++;
			else break;
			if (count == row - 1)
				return arr[i][1];
		}
	}
	for (i = 0; i < row; i++)
	{
		count = 0;
		for (j = 0; j < col; j++)
		{
			if ((arr[i][j] == arr[i + 1][j]) && (arr[i][j] != ' '))//列相等
				count++;
			else break;
			if (count == row - 1)
				return arr[1][j];
		}
	}
	for (i = 0; i < row; i++)
	{
		count = 0;
		for (j = 0; j < col; j++)
		{
			if ((i == j) && (arr[i][j] == arr[i + 1][j + 1]) && (arr[i][j] != 'X'))//正斜相等
				count++;
			else break;
			if (count == row - 1)
				return arr[0][0];
		}
	}
	for (i = row - 1; i >= 0; i++)//反斜相等
	{
		count = 0;
		for (j = 0; j < col; j++)
		{
			if ((arr[row - 1][j] == arr[row - 2][j + 1]) && (arr[i][j] != ' '))
				count++;
			else break;
			if (count == row - 1)
				return arr[row - 1][0];
		}
	}
	for (i = 0; i < row; i++)//平局
	{
		count = 0;
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == 'X' || arr[i][j] == 'O') //遍历数组，查看是否还有没有走的地方
			{
				count++;
				if (count == 9)
					return 'Q';
			}
		}
	}
	return 'A';
}