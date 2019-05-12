#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//1.
int count_one_bit(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = count_one_bit(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//2.
int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	for (i = 32; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	system("pause");
	return 0;
}

//3.
int print(int n)
{
	if (n <= 9)
		printf("%d ", n);
	if (n >= 10)
	{
		print(n / 10);
		printf("%d ", n % 10);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}

//4.
int count_one_bit(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}

int count_diff_bit(int x, int y)
{
	int tmp = x^y;
	return count_one_bit(tmp);
}

int main()
{
	int m = 0;
	int n = 0;
	int ret = 0;
	scanf("%d %d", &m, &n);
	ret = count_diff_bit(m, n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}