//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i,j,i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}//乘法口诀
//
//
//int swap(int *px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	system("pause");
//	return 0;
//}//函数实现两个数的交换
//
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	system("pause");
//	return 0;
//}//函数实现判断闰年
//
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i += 2)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for(i = 100; i <= 200;i++)
//	if (is_prime(i) == 1)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}//函数实现判断素数
//
//void InitArry(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = i;
//	}
//}
//
//void EmptyArry(int arr[], int size)
//{
//	memset(arr, 0, sizeof(arr[0]) * size);
//}
//
//void ReverseArry(int arr[], int size)
//{
//	int left = 0;
//	int right = size - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void PrintArry(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int a[5];
//	int _size = sizeof(a) / sizeof(a[0]);
//	InitArry(a, _size);
//	PrintArry(a, _size);
//	//EmptyArry(a, _size);
//	//PrintArry(a, _size);
//	ReverseArry(a, _size);
//	PrintArry(a, _size);
//	system("pause");
//	return 0;
//}