#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1;
	int b = 2;
	int tmp = 0;
	tmp = a;//1
	b = tmp;//1
	a = tmp + b;
	printf("a=%d b=%d", a, b);
  system("pause");
	return 0;
}//�����������α�����ֵ��������ֵ�����ݽ��н�����

int main()
{
	int a = 1;
	int b = 2;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
  system("pause");
	return 0;
}//����������ʱ���������������������ݣ������⣩

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int MAX = 0;
	int i;
	for (i = 0; i < 10; i++)
	{
		if (arr[i]>MAX)
			MAX = arr[i];
	}
	printf("%d\n", MAX);
	system("pause");
	return 0;
}//��10 �����������ֵ��

int main()
{
	int a, b, c;
	int temp;
	scanf("%d %d %d", &a, &b, &c);
	if (a<b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a<c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b<c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d", a,b,c);
	system("pause");
	return 0;
}//���������������Ӵ�С˳�����

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int n = a;
	if (n > b)
		n = b;
	int i;
	for (i = n; i >= 1; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("���Լ��Ϊ��%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}//������������������Լ��

