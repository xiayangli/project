#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu() //�˵�����
{
	printf("********************\n");
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
}

void game()
{
	char arr[ROW][COL] = { 0 };
	Arr_init(arr, ROW, COL); //�����ʼ��
	Print_che(arr, ROW, COL); //��ӡ����
	while (1)
	{
		char n;
		Player_go(arr, ROW, COL);//�����
		Print_che(arr, ROW, COL);
		n = Judge_Q(arr, ROW, COL);//�ж���Ӯ
		if (n == 'X')
		{
			printf("���Ӯ��\n");
			break;
		}
		if (n == 'O')
		{
			printf("����Ӯ��\n");
			break;
		}
		if (n == 'Q')
		{
			printf("ƽ��~\n");
			break;
		}
		else
			printf("------------------\n");

		Computer_go(arr, ROW, COL);//������
		Print_che(arr, ROW, COL);
		n = Judge_Q(arr, ROW, COL);//�ж���Ӯ
		if (n == 'X')
		{
			printf("���Ӯ��\n");
			break;
		}
		if (n == 'O')
		{
			printf("����Ӯ��\n");
			break;
		}
		if (n == 'Q')
		{
			printf("ƽ��~\n");
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
		printf("������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("����������������롣\n");
		}
	} while (input);
	system("pause");
	return 0;
}