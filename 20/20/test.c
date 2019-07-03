#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"
int main()
{
	int n;
	struct contact people;
	people.count_user = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		add_contact(&people);
		break;
	case 2:
		del_contact(&people);
		break;
	case 3:
		search_contact(&people);
		break;
	case 4:
		clear_contact(&people);
		break;
	case 5:
		modify_contact(&people);
		break;
	case 6:
		show_contact(&people);
		break;
	default:
		printf("输入错误！");
		break;
	}
	return 0;
}