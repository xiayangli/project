#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void left_remove(char *p, int n, int len)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		char tmp = p[0];
//		for (j = 0; j < len; j++)
//		{
//			p[j] = p[j + 1];
//		}
//		p[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int n;
//	int len = strlen(arr);
//	printf("旋转前：%s\n", arr);
//	printf("旋转几位:");
//	scanf("%d", &n);
//	while (n < 1 || n > len - 1)//对于输入旋转字符数的临界值判断，是否超过字符串长度
//	{
//		if (n == len)//旋转字符数为字符串长度时，旋转后的字符串与旋转前的字符串一致，所以可直接输出
//		{
//			printf("%s", arr);
//			system("pause");
//			return 0;
//		}
//		else
//		{
//			printf("输入错误\n");
//			scanf("%d", &n);
//		}
//	}
//	left_remove(arr, n, len);//函数用以完成旋转字符的功能
//	printf("旋转后: %s\n", arr);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int compare(char str1[], char str2[])
//{
//	int i = 0;
//	int j = 0;
//	int length = strlen(str1);
//	for (j = 1; j <= length; j++)
//	{
//		{
//			int tmp = str1[0];
//			for (i = 0; i < length - 1; i++)
//			{
//				str1[i] = str1[i + 1];
//			}
//			str1[length - 1] = tmp;
//		}
//		if (0 == strcmp(str1, str2))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[10] = "AABCD";
//	char s2[10] = "BCDAA";
//	printf("s1 = %s\n", s1);
//	printf("s2 = %s\n", s2);
//	if (compare(s1, s2) == 1)
//	{
//		printf("s1为s2旋转后的字符串\n");
//	}
//	else
//	{
//		printf("s1不是s2旋转后的字符串\n");
//	}
//	system("pause");
//	return 0;
//}