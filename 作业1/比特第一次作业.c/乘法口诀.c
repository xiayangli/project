#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

