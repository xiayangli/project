#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	unsigned int sum = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum += ((value >> i) & 1) << (31 - i);//取出最低位，左移到相应位置
//	}
//	return sum;
//
//}
//
//int main()
//{
//	unsigned int num = 25;
//	printf("反转后：%u\n", reverse_bit(num));
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int avg = num1 - (num1 - num2) / 2;
//	printf("%d", avg);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>  
//int main()
//{
//	int arr[] = { 1, 5, 5, 1, 7, 6, 7, 8, 8, 9, 9 };
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//
//	for (i = 1; i < len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("the single number is:%d", arr[0]);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<Windows.h>
//int MyStrlen(char *str)
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char *left, char *right)
//{
//	char tmp;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void ReverseStr(char *str)
//{
//	char *left = str;
//	char *right = str + MyStrlen(str) - 1;
//	char *cur = str;
//	reverse(left, right);//逆置字符串
//	while (*cur != '\0')
//	{
//		char *start = cur;
//		while (*cur != ' '&&*cur != '\0')
//		{
//			cur++;
//		}
//		reverse(start, cur - 1);
//		if (*cur == ' ')
//		{
//			cur++;
//		}
//	}
//}
//int main()
//{
//	char str[] = "student a am i";
//	ReverseStr(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
