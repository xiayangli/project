#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	for (i = 0; i <10; i++)
	{
		printf("数组1=%d " ,arr1[i]);
		
	}
	printf("\n");
	for (i = 0; i <10; i++)
	{
		printf("数组2=%d ", arr2[i]);

	}
	for (i = 0; i < 10; i++)
	{
		int t = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = t;
	}
	printf("\n交换后\n");
	printf("\n");
	for (i = 0; i <10; i++)
	{
		printf("数组1=%d ", arr1[i]);

	}
	printf("\n");
	for (i = 0; i <10; i++)
	{
		printf("数组2=%d ", arr2[i]);

	}
	system("pause");
	return 0;
}//将数组A中的内容和数组B中的内容进行交换

int main()
{
	int i, j;
	int sum = 0;
	int sum1 = 0;
	int sum2 = 0;
	for (i = 1; i < 100; i += 2)
	{
		sum1 = sum1 + 1 / i;
	}
	for (j = 2; j <= 100; j += 2)
	{
		sum2 = sum2 + 1 / j;
	}
	sum = sum1 - sum2;
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i / 10 == 9)
		{
			count++;
		}
		if (i % 10 == 9)
		{
			count++;
		}
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}//编写程序数一下 1到 100 的所有整数中出现多少次数字9

