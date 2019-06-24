#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu() //菜单函数
{
	printf("********************\n");
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
}

void game()
{
	char arr[ROW][COL] = { 0 };
	Arr_init(arr, ROW, COL); //数组初始化
	Print_che(arr, ROW, COL); //打印棋盘
	while (1)
	{
		char n;
		Player_go(arr, ROW, COL);//玩家走
		Print_che(arr, ROW, COL);
		n = Judge_Q(arr, ROW, COL);//判断输赢
		if (n == 'X')
		{
			printf("玩家赢！\n");
			break;
		}
		if (n == 'O')
		{
			printf("电脑赢！\n");
			break;
		}
		if (n == 'Q')
		{
			printf("平局~\n");
			break;
		}
		else
			printf("------------------\n");

		Computer_go(arr, ROW, COL);//电脑走
		Print_che(arr, ROW, COL);
		n = Judge_Q(arr, ROW, COL);//判断输赢
		if (n == 'X')
		{
			printf("玩家赢！\n");
			break;
		}
		if (n == 'O')
		{
			printf("电脑赢！\n");
			break;
		}
		if (n == 'Q')
		{
			printf("平局~\n");
			break;
		}
		else
			printf("------------------\n");
	}
}


int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入。\n");
		}
	} while (input);
	system("pause");
	return 0;
}