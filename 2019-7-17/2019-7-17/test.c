#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//ʱ�临�Ӷ�O��logn)
//�ѵ����µ���
void heapify(int a[], int size, int index){
	while (true){
		int left = 2 * index + 1;
		int right = 2 * index + 2;
		//��ȷ��index�ǲ���Ҷ�ӽڵ�
		//���ж�index��û������
		//index��û������
		//index�����±��Ƿ�Խ��
			if (left >= size){
			return;
		}
		//�����Һ����н�С���ӵ��±�
		//�ȼ�����С��������
		//�Һ��Ӵ��ڲ�С�����ӵ�ֵ
		int min = left;
		if (right < size&&a[right] < a[index]){
			min = right;
		}
		if (a[index] <= a[min]){
			return;
		}
		int t = a[min];
		a[min] = a[index];
		a[index] = t;
		index = min;
	}
}

//����
void createHeap(int a[], int size){
	for (int i = (size - 2 / 2); i >= 0; i--){
		heapify(a, size, i);
	}
}

typedef struct Heap{
	int array[100];
	int size;
}Heap;

void HeapInit(Heap *heap, int a[], int size){
	for (int i = 0; i < size; i++){
		heap->array = a[i];
	}
	heap->size = size;
	creatHeap(heap->array, heap->size);
}

//���ϵ���
//ʱ�临�Ӷ�O(logn)
void adjustUp(int a[], int index){
	if (index == 0){
		return;
	}
	int parent = (index - 1) / 2;
	if (a[parent] <= a[index]){
		return;
	}
	int t = a[parent];
	a[parent] = a[index];
	a[index] = t;
	index = parent;
}
void HeapPush(Heap *heap, int val){
	heap->array[heap->size++] = val;
	adjustUp(heap->array, heap->size - 1);
}

//ɾ��
void HeapPop(Heap *heap){
	assert(heap - >size > 0);
	heap->array[0] = heap->array[heap->size - 1];
	heap->size--;
	heapify(int a[], int size, int index);
}
