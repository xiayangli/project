#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	fib(n);
	printf("%d\n", fib(n));
	system("pause");
}//递归实现求第n个斐波那契数

int main()
{
	int n = 0;
	scanf("%d", &n);
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d\n", c);
	system("pause");
	return c;
}//非递归实现求第n个斐波那契数
 
int fac(int n, int k)
{
	if (n == 0 && k == 0)
		return 1;
	if (n > 0 && k == 1)
		return n;
	if (n > 0 && k > 1)
		return n*fac(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	printf("%d\n", fac(n, k));
	system("pause");
}//递归实现n^k

int DigitSum(int n)
{
	if (n > 0 && n < 9)
		return n;
	else
		return (n % 10) + DigitSum(n / 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", DigitSum(n));
	system("pause");
}//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}//非递归实现strlen

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}//递归实现strlen

int main()
{
	char str[] = "abc";
	int ret = my_strlen(str);
	printf("%d\n", ret);
	system("pause");
}

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int reverse_string(char *string, int len)
{
	char temp = *string;
	*string = *(string + len - 1);
	*(string + len - 1) = '\0';
	if (len > 1)
		reverse_string(string + 1, len - 1);
	*(string + len - 1) = temp;
	return string;
}

int main()
{
	char *str = "abcde";
	int len = my_strlen(str);
	printf("%s", reverse_string(str, len));
	system("pause");
	return 0;
}//反向排列字符串

int Factorial_multiplication(int n)
{
	int k = 1;
	while (n > 0)
		k *= n--;
	return k;
}

int main()
{
	int n = 0;
	printf("输入一个数，求阶乘\n");
	scanf("%d", &n);
	printf("%d", Factorial_multiplication(n));
	system("pause");
	return 0;
}//非递归求n的阶乘

int Factorial_multiplication_2(int n)
{
	if (n == 1)
		return 1;
	else	
		return n*Factorial_multiplication_2(n - 1);
}

int main()
{
	int n = 0;
	printf("输入一个数，求阶乘\n");
	scanf("%d", &n);
	printf("%d", Factorial_multiplication_2(n));
	system("pause");
	return 0;
}//递归求n的阶乘

void print(int n)
{
	if (n>9)
	{
		print(n / 10);
	}
	printf("%d  ", n % 10);
}

int main()
{
	int num = 1234;
	print(num);
	system("pause");
	return 0;
}//递归方式实现打印一个整数的每一位 