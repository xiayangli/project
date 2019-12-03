#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void InitHeap(Heap* hp, Compare com)
{
	if (hp == NULL)
		return;
	hp->_array = (DataType *)malloc(sizeof(DataType)*MAX_SIZE);
	if (hp->_array == NULL)
		printf("申请空间失败\n");
	hp->_size = 0;
	hp->_com = com;
}
void Swap(int *m, int *n)
{
	int tmp = *m;
	*m = *n;
	*n = tmp;
}

void CheckCapacity(Heap* hp)
{
	DataType* pNewCapacity = NULL;
	if (hp == NULL)
		return;
	pNewCapacity = (DataType *)malloc(sizeof(DataType)* hp->_capacity * 2);
	if (pNewCapacity == NULL)
		printf("扩容失败\n");
}

void AdjustUp(Heap* hp, DataType child)
{
	int parent = (child - 1) >> 1;
	if (hp == NULL)
		return;
	while (child)
	{
		if (hp->_com(hp->_array[child], hp->_array[parent]))
		{
			Swap(&hp->_array[parent], &hp->_array[child]);
			child = parent;
			parent = (child - 1) >> 1;
		}
		else
			break;
	}
}

void AdjustDown(Heap* hp, DataType parent)
{
	int child = parent * 2 + 1;
	if (hp == NULL)
		return;
	while (child<hp->_size)
	{
		if (hp->_com(hp->_array[child + 1], hp->_array[child]) && child + 1<hp->_size)
		{
			child = child + 1;
		}
		if (hp->_com(hp->_array[child], hp->_array[parent]))
		{
			Swap(&hp->_array[child], &hp->_array[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
}

// 创建堆 
void CreateHeap(Heap* hp, DataType* array, int size)
{
	int i = 0;
	int root = 0;
	assert(hp);
	hp->_array = (DataType *)malloc(sizeof(DataType)*MAX_SIZE);
	if (hp->_array == NULL)
		printf("申请空间失败\n");
	hp->_capacity = MAX_SIZE;
	hp->_size = 0;
	for (; i<size; ++i)
	{
		hp->_array[i] = array[i];
		hp->_size++;
	}
	hp->_size = size;
	root = (size - 2) >> 1;  
	for (; root >= 0; root--)
		AdjustDown(hp, root);
}

// 在堆中插入值为data的元素 
void InsertHeap(Heap* hp, DataType data)
{
	if (hp == NULL)
		return;
	if (hp->_size == hp->_capacity)
	{
		CheckCapacity(hp);
	}
	hp->_array[hp->_size] = data;
	hp->_size++;
	if (hp->_size >1)
		AdjustUp(hp, hp->_size - 1);
}

// 删除堆顶元素 
void DeleteHeap(Heap* hp)
{
	if (hp == NULL)
		return;
	Swap(&hp->_array[0], &hp->_array[hp->_size - 1]);
	hp->_size--;
	AdjustDown(hp, 0);
}

// 获取堆中元素的个数 
int SizeHeap(Heap* hp)
{
	if (hp == NULL)
		return 0;
	return hp->_size;
}

// 检测堆是否为空
int EmptyHeap(Heap* hp)
{
	if (hp == NULL)
		return 1;
	return 0;
}

// 获取堆顶元素 
DataType TopHeap(Heap* hp)
{
	if (hp == NULL)
		return -1;
	return hp->_array[0];
}

// 销毁堆 
void DestroyHeap(Heap* hp)
{
	assert(hp);
	if (EmptyHeap(hp))
		return;
	hp->_size = 0;
	hp->_com = NULL;
}

// 小堆 
int Less(DataType left, DataType right)
{
	return left<right;
}

// 大堆 
int Greater(DataType left, DataType right)
{
	return left>right;
}

void AdjustHeap(int *array, int size, int parent, Compare com)
{
	int child = (parent << 1) + 1;
	while (child<size)
	{
		if (child + 1 <size && com(array[child + 1], array[child]))
		{
			child += 1;
		}
		if (com(array[child], array[parent]))
		{
			Swap(&array[child], &array[parent]);
			parent = child;
			child = (parent << 1) + 1;
		}
		else
			break;
	}
}

void HeapSort(int *array, int size, Compare com)
{
	int root = (size - 2) >> 1;
	int end = size - 1;
	while (root >= 0)
	{
		AdjustHeap(array, size, root, com);
		root--;
	}
	while (end>0)
	{
		Swap(&array[0], &array[end]);
		AdjustHeap(array, end, 0, com);
		end--;
	}
}



void Heap_Print(int *array, int size)
{
	int i = 0;
	for (; i<size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void testHeap()
{
	Heap hp;
	int arr[] = { 53, 17, 78, 9, 5, 65, 87, 23, 31 };
	int size = sizeof(arr) / sizeof(arr[0]);
	InitHeap(&hp, Greater);
	CreateHeap(&hp, arr, size);
	InsertHeap(&hp, 13);
	printf("top=%d\n", TopHeap(&hp));
	printf("size=%d\n", SizeHeap(&hp));
	DestroyHeap(&hp);
}

void testHeapSort()
{
	int arr[] = { 53, 17, 78, 9, 5, 65, 87, 23, 31 };
	Heap_Print(arr, sizeof(arr) / sizeof(arr[0]));
	HeapSort(arr, sizeof(arr) / sizeof(arr[0]), Less);
	Heap_Print(arr, sizeof(arr) / sizeof(arr[0]));
}