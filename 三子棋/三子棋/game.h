#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3 //��
#define COL 3 //��

void Arr_init(char arr[ROW][COL], int row, int col); //�����ʼ��
void Print_che(char arr[ROW][COL], int row, int col);//��ӡ����
void Player_go(char arr[ROW][COL], int row, int col);//�����
void Computer_go(char arr[ROW][COL], int row, int col);//������
char Judge_Q(char arr[ROW][COL], int row, int col);//�ж���Ӯ