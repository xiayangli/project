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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}//���ַ�
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룻>");
//		scanf("%s", &password);
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("��½�ɹ�");
//		}
//		else
//		{
//			printf("����������������롣");
//		}
//		break;
//	}
//	if (i == 3)
//	{
//		printf("���ξ���������˳���¼��");
//	}
//	system("pause");
//	return 0;
//}//������������
//
//int main()
//{
//
//
//	int ch;
//	printf("������һ���ַ�:\n");
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
//}//��Сдת��
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
//		printf("������֣�>");
//			scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´��ˡ�\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С�ˡ�\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d ", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}//��������Ϸ