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
//	printf("��תǰ��%s\n", arr);
//	printf("��ת��λ:");
//	scanf("%d", &n);
//	while (n < 1 || n > len - 1)//����������ת�ַ������ٽ�ֵ�жϣ��Ƿ񳬹��ַ�������
//	{
//		if (n == len)//��ת�ַ���Ϊ�ַ�������ʱ����ת����ַ�������תǰ���ַ���һ�£����Կ�ֱ�����
//		{
//			printf("%s", arr);
//			system("pause");
//			return 0;
//		}
//		else
//		{
//			printf("�������\n");
//			scanf("%d", &n);
//		}
//	}
//	left_remove(arr, n, len);//�������������ת�ַ��Ĺ���
//	printf("��ת��: %s\n", arr);
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
//		printf("s1Ϊs2��ת����ַ���\n");
//	}
//	else
//	{
//		printf("s1����s2��ת����ַ���\n");
//	}
//	system("pause");
//	return 0;
//}