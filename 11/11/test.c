#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	for (b = 1; b <= 5; b++)
//	for (c = 1; c <= 5; c++)
//	for (d = 1; d <= 5; d++)
//	for (e = 1; e <= 5; e++)
//	{
//		if (((b == 2) + (a == 3) == 1) &&
//			((b == 2) + (e == 4) == 1) &&
//			((c == 1) + (d == 2) == 1) &&
//			((c == 5) + (d == 3) == 1) &&
//			((e == 4) + (a == 1) == 1))
//		{
//			if ((a != b) && (a != c) && (a != d) && (a != e) &&
//				(b != c) && (b != d) && (b != e) &&
//				(c != d) && (c != e) &&
//				(d != e))
//			{
//				printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//#include <stdio.h>  
//#include <stdlib.h>
//int main() {
//	int A = 0, B = 0, C = 0, D = 0;
//	int FD;//因为c和d的供词刚好对立 表示对立的  
//	int i;
//	for (i = 1; i <= 4; i++)
//	{
//		if (i == 1)//A说的假  
//		{
//			A = 1; C = 1; FD = 1; D = 0;
//		}
//		if (i == 2)//B说的假  
//		{
//			A = 0; C = 0; FD = 1; D = 0;
//		}
//		if (i == 3)//C说的假  
//		{
//			A = 0; C = 1; FD = 0; D = 0;
//		}
//		if (i == 4)//D的说的假  
//		{
//			A = 0; C = 1; FD = 1; D = 1;
//		}
//		if (A + B + C + D + FD == 1 && FD == D)
//			//只有一个人是凶手 当和为1时一个凶手出现  因为CD供词推出的都是D是不是 与上FD==D是为了排除D是D不是的情况   
//			printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
//	}
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<Windows.h>
//#define N 10
//void Yang_Hui_Tria(void)
//{
//	int i = 0;
//	int j = 0;
//	int triangle[N][N] = { 1 };
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			triangle[i][j] = 1;
//		}
//	}
//	for (i = 2; i < N; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" %d ", triangle[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	Yang_Hui_Tria();
//	system("pause");
//	return 0;
//}
