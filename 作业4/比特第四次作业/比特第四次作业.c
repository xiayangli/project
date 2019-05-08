#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n = 6;
	int i, a, b;
	for (i = 1; i <= n; i++)
	{
		for (a = n - 1; a >= i; a--)
		{
			printf(" ");
		}
		for (b = 1; b <= 2 * i - 1; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = n - 1; i >= 1; i--)
	{
		for (a = i; a <= n - 1; a++)
		{
			printf(" ");
		}
		for (b = 1; b <= 2 * i - 1; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}//打印菱形

int main()
{
		int i = 0;
		int hundreds = 0;
		int decade = 0;
		int unit = 0;
		for (i = 0; i <= 999; i++)
		{
			if (i / 100 != 0)
			{
				hundreds = i / 100;
				decade = i % 100 / 10;
				unit = i % 10;
				if (i == (hundreds*hundreds*hundreds + decade*decade*decade + unit*unit*unit))
				{
					printf("%d\n", i);
				}
			}
		}
	system("pause");
	return 0;
}//水仙花数

int main()
{
	int sum = 0;
	int sn = 0;
	int a = 2;
	int i = 0;
	for (i = 0; i <= 4; i++)
	{
		sum = sum + a * pow(10, i);
		sn = sn + sum;
	}
	printf("%d\n", sn);
	system("pause");
	return 0;
}//求Sn