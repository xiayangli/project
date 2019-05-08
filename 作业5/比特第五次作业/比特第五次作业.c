//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//int binary_search(int arr[], int k, int left, int right)
//{
//	
//	while (left < right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//		if (left > right)
//		{
//			return -1;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = binary_search(arr, k, left, right);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}//二分法
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码；>");
//		scanf("%s", &password);
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("登陆成功");
//		}
//		else
//		{
//			printf("密码错误，请重新输入。");
//		}
//		break;
//	}
//	if (i == 3)
//	{
//		printf("三次均输入错误，退出登录。");
//	}
//	system("pause");
//	return 0;
//}//三次密码输入
//
//int main()
//{
//
//
//	int ch;
//	printf("请输入一个字符:\n");
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a'&&ch <= 'z')
//			printf("%c\n", ch - 32);
//		else
//		if (ch >= 'A'&&ch <= 'Z')
//			printf("%c\n", ch + 32);
//		else
//		if (ch >= '0'&&ch <= '9')
//			;
//		else
//			;
//		break;
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}//大小写转换
//
//int menu()
//{
//	printf("******************************************\n");
//	printf("********    1.play     0.exit      *******\n");
//	printf("******************************************\n");
//}
//int game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("请猜数字：>");
//			scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了。\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了。\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d ", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择。\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}//猜数字游戏