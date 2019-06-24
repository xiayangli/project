#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void Arr_init(char arr[ROW][COL], int row, int col)//�����ʼ��
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
void Print_che(char arr[ROW][COL], int row, int col)//��ӡ����
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
void Player_go(char arr[ROW][COL], int row, int col)//�����
{
	int x, y;
	printf("�����\n");
	while (1)
	{
		printf("�������������:>");
		scanf("%d%d", &x, &y);
		if (((x > 0) && (x <= row)) && ((y > 0) && (y <= col)))
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = 'X';
				break;
			}
			else
				printf("�����������壬����������:>\n");
		}
		else
			printf("����������������룺>\n");
	}
}
void Computer_go(char arr[ROW][COL], int row, int col)//������
{
	int x, y;
	printf("������\n");
	while (1)
	{
		x = rand() % row;//���������
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
			if ((arr[i][j] == arr[i][j + 1]) && (arr[i][j] != ' '))//�����
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
			if ((arr[i][j] == arr[i + 1][j]) && (arr[i][j] != ' '))//�����
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
			if ((i == j) && (arr[i][j] == arr[i + 1][j + 1]) && (arr[i][j] != 'X'))//��б���
				count++;
			else break;
			if (count == row - 1)
				return arr[0][0];
		}
	}
	for (i = row - 1; i >= 0; i++)//��б���
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
	for (i = 0; i < row; i++)//ƽ��
	{
		count = 0;
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == 'X' || arr[i][j] == 'O') //�������飬�鿴�Ƿ���û���ߵĵط�
			{
				count++;
				if (count == 9)
					return 'Q';
			}
		}
	}
	return 'A';
}