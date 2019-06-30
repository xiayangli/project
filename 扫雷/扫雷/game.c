#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//1.��ӡһ���˵�����ʾ�û��Ƿ�ʼ��Ϸ
int  Menu() {
	printf("##########################\n");
	printf("           1.play         \n");
	printf("           0.exit         \n");
	printf("##########################\n");
	int choice = 0;
	printf("����������ѡ��\n");
	scanf("%d", &choice);
	return choice;
}
#define Mine_number 10
#define ROW 9
#define COL 9
//��Ҫ�����������飺����һ���߿�
//һ����ʾ����
//���ַ�'0'��ʾ���ǵ��ף��ַ�'1'��ʾ�ǵ���
char mine_map[ROW + 2][COL + 2];

//һ����ʾ�����չʾ��ɨ��ͼ
//*��ʾδ�򿪵ĸ��ӣ��򿪵ĸ����þ������������ʾ��Χ8�����ӵ��׵�����
char show_map[ROW + 2][COL + 2];
//û�е��׵ĸ�����
int no_mine_number = 0;
void Init(char mine_map[ROW + 2][COL + 2], char show_map[ROW + 2][COL + 2]) {
	//1.��������г�ʼ��
	//�ѱ�ʾ���������ȫ����ʼ��Ϊ'0'
	//(1)����1��ͨ��һ������(��Ӧ�����ĺ���)����Ҫ���и�ֵ������������Ҫ��ֵ
	//��ʲô����ֵ����Ĵ�С��
	memset(mine_map, '0', (ROW + 2)*(COL + 2));
	//��2������2��ͨ��ѭ�����и�ֵ
	//int row = 0;
	//int col = 0;
	//for (row = 1; row <= ROW; row++) {
	//	for (col = 1; col <= COL; col++) {
	//		mine_map[row][col] = '0';
	//	}
	//}
	//�ѱ�ʾδ�򿪵ĸ���ȫ����ʼ��Ϊ*
	memset(show_map, '*', (ROW + 2)*(COL + 2));
	//2.ͨ������ķ����������ú�
	srand((unsigned)time(NULL));
	int mine_count = Mine_number;
	//ÿ���������һ�������ꡢһ�������꣬��ʾ�е��׵�λ�ã�ÿ�β��ò���һ������
	//��ΧΪ:[1,ROW]
	while (mine_count > 0) {
		int row = 0;
		int col = 0;
		row = rand() % 9 + 1;
		col = rand() % 9 + 1;
		if (mine_map[row][col] == '0'){
			mine_map[row][col] = '1';
			mine_count--;
		}
	}
}
void PrintMap(char map[ROW + 2][COL + 2]) {
	int row = 0;
	int col = 0;
	//��ӡ��һ��֮ǰ�ȴ�ӡ5���ո�Ϊ���ü��̸��Ӻÿ�
	printf("   ");
	//��ӡ�к�
	for (col = 1; col <= COL; col++) {
		printf("%d   ", col);
	}
	printf("\n");
	//��ӡ�ڶ��У��߿�
	for (col = 1; col <= COL; col++) {
		printf("----");
	}
	printf("\n");
	//��ӡ��������
	for (row = 1; row <= ROW; row++) {
		//%02d����˼�ǰ�һλ��Ҳ��Ϊ��λ�����
		//1==>01  2==>02
		//��ӡ�к�֮ǰ�ȴ�ӡһ���ո�Ϊ�˶���������ÿ������
		printf(" ");
		printf("%d|", row);
		for (col = 1; col <= COL; col++) {
			printf("%c   ", map[row][col]);
		}
		printf("\n");
		printf("\n");
	}
}
//��Ҫͳ�Ƶ�ǰλ����Χ8��λ�õĵ�����������������µ�show_map��
void UpdateMap(char show_map[ROW + 2][COL + 2], char mine_map[ROW + 2][COL + 2],
	int row, int col) {
	int mine_count = 0;
	//row, col;��ǰλ��
	//1.row - 1, col - 1;
	//����mine_map��ֻ�����������Ҫô��1��ʾ�е��ף�Ҫô��0��ʾû�е��ף�
	//���Կ���ͨ�����ַ�ʽ����ͳ�Ƶ��׵�����
	mine_count = (mine_map[row - 1][col - 1] - '0') +
		//2.row - 1, col;
		(mine_map[row - 1][col] - '0') +
		//3.row - 1, col + 1;
		(mine_map[row - 1][col + 1] - '0') +
		//4.row, col - 1;
		(mine_map[row][col - 1] - '0') +
		//5.row, col + 1;
		(mine_map[row][col + 1] - '0') +
		//6.row + 1, col - 1;
		(mine_map[row + 1][col - 1] - '0') +
		//7.row + 1, col;
		(mine_map[row + 1][col] - '0') +
		//8.row + 1, col + 1;
		(mine_map[row + 1][col + 1] - '0');
	show_map[row][col] = '0' + mine_count;//ֱ�Ӱѵ��׵�����ת��Ϊ�ַ���ʽ
	//��ʾ��������Ϊshow_map[row][col]���ַ����͵ģ��ַ�'0'��ASCII��Ϊ60��'1'
	//��ASCII��Ϊ61�����ԼӼ���ת��Ϊ�ַ�����ASCII�롣
}
void Game() {
	//1.��ʼ����ͼ��mine_map,show_map��
	Init(mine_map, show_map);
	//2.�ȴ�ӡshow_map.
	PrintMap(show_map);
	//��Ϊ�漰������Ĳ�����Ҫ�ж��ǻ������ֹ���������Դ˴���Ҫѭ��
	while (1) {
		//3.��ʾ�û���������
		int row = 0;
		int col = 0;
		printf("��������Ҫ������������꣺row col\n");
		scanf("%d %d", &row, &col);
		//4.���û�����ĺϷ��Խ����жϣ������������ʾ�û���������
		if (row <= 0 || row > ROW || col <= 0 || col > COL) {
			printf("�������벻�������������룺\n");
			continue;
		}
		//5.�ж���ҵ�ǰ�Ƿ���ף�������ף���Ϸ�������Ҵ�ӡ����
		if (mine_map[row][col] == '1') {
			printf("��Ϸ������\n");
			PrintMap(mine_map);
			break;
		}
		//6.���û���ף��ж�����Ƿ�ʤ����ʤ���������ǣ��Ѿ������ķ�����=����-������
		if (no_mine_number == ROW * COL - Mine_number) {
			printf("��ϲ����ʤ�ˣ�\n");
			PrintMap(mine_map);
			break;
		}
		//7.����������Ҫͳ�Ƶ�ǰλ����Χ�м����ף�Ȼ��ص���3��
		UpdateMap(show_map, mine_map, row, col);
		PrintMap(show_map);
	}
}
//2.ͨ������ֵ�ж��Ƿ������Ϸ
void statr() {
	while (1) {
		int choice = Menu();
		if (choice == 0){
			printf("�˳���Ϸ\n");
			break;
		}
		Game();//Ϊ1�͵��øú�����ʼ��Ϸ
		break;//�����break��Ϊ���ó���ֻ����һ�Σ������������Ӯ�����䶼�˳�
		//��Ϸ��
	}
}
int main() {
	statr();
	system("pause");
	return 0;
}

