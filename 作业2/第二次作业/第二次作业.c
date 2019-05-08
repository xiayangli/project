#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1;
	int b = 2;
	int tmp = 0;
	tmp = a;//1
	b = tmp;//1
	a = tmp + b;
	printf("a=%d b=%d", a, b);
  system("pause");
	return 0;
}//给定两个整形变量的值，将两个值的内容进行交换。

int main()
{
	int a = 1;
	int b = 2;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
  system("pause");
	return 0;
}//不允许创建临时变量，交换两个数的内容（附加题）

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int MAX = 0;
	int i;
	for (i = 0; i < 10; i++)
	{
		if (arr[i]>MAX)
			MAX = arr[i];
	}
	printf("%d\n", MAX);
	system("pause");
	return 0;
}//求10 个整数中最大值。

int main()
{
	int a, b, c;
	int temp;
	scanf("%d %d %d", &a, &b, &c);
	if (a<b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a<c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b<c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d", a,b,c);
	system("pause");
	return 0;
}//输入三个数，按从大到小顺序输出

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int n = a;
	if (n > b)
		n = b;
	int i;
	for (i = n; i >= 1; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("最大公约数为；%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}//输入两个数，输出最大公约数

