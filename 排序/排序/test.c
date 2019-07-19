#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

//插入排序
void insertSortTest(int a[], int size){
	for (int i = 0; i < size; i++){
		//有序区间[0，i)
		//无序区间[i,size)

		//抓的哪张牌？
		//去有序区间选择插入位置（从后往前找）
		for (int j = i - 1; j >= 0; j--){
			if (a[i]>=a[j]){
				break;
			}
		}
		int j;
		int index = j + 1;
		//再把[i]插入到合适的下标
		int k = a[i];
		//k插入到index位置
		for (int t = i - 1; t >= index; t--){
			a[t + 1] = a[t];
		}
		a[index] = k;
	}
}

//稳定性：稳定
//时间复杂度：最好—O（n）—有序；最坏—O（n^2）—逆序;平均—O(n^2)—随机的
//空间复杂度：最好—O（1）；最坏/平均—O(n^2)
//合并直接插入排序
void insertSort(int a[], int size){
	for (int i = 0; i < size; i++){
		//有序[0,i)
		//无序[i,size)
		int k = a[i];
		int j;
		for (j = i - 1; i >= 0 && k < a[j]; j--){
			a[j + 1] = a[j];
		}
		a[j + 1] = k;
	}
}


//改造直接插入排序
void insertSortWithGap(int a[], int size,int gap){
	for (int i = 0; i < size; i++){
		int k = a[i];
		int j;
		for (j = i - gap; i >= 0 && k < a[j]; j-=gap){
			a[j + gap] = a[j];
		}
		a[j + gap] = k;
	}
}

//希尔排序
void shellSort(int a[], int size){
	int gap = size;
	while (1){
		gap = gap / 3 + 1;
		insertSortWithGap(a, size, gap);
		if (gap == 1){
			break;
		}
	}
}

//选择排序
//通过遍历无序区间，找到无序区间最大的数的下标
//交换 无序区间最大的数 和 无序区间最后的数
//稳定性：不稳定
//时间复杂度：O（n^2）     数据不敏感
//空间复杂度：O（1）
void selectSort(int a[], int size){
	for (int i = 0; i < size; i++){
		//无序区间 [0,size-i)
		//有序区间 [size-i,size)
		int max = 0;
		for (int j = 1; j < size - i; j++){
			if (a[j]>a[max]){
				max = j;
			}
		}
		//交换
		int t=a[max];
		a[max] = a[size - i - 1];
		a[size - i - 1] = t;
	}
}

//向下调整
void heapify(int a[], int size, int index){
	while (1){
		int left = 2 * index + 1;
		int right = 2 * index + 2;
		if (left >= size){
			return;
		}
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

//建堆
void createHeap(int a[], int size){
	for (int i = (size - 2 / 2); i >= 0; i--){
		heapify(a, size, i);
}

//堆排序
//稳定性：不稳定
//时间复杂度：O（n*log(n))
//空间复杂度：O（1）
	void heapSort(int a[], int size); {
	//1.建堆
	createHeap(a, size);
	//2.需要size次
	for (int i = 0; i < size; i++){
		//无序区间 [0,size-i)
		//有序区间 [size-i,size)
		int t = a[0];
		a[0] = a[size - i - 1];
		a[size - i - 1] = a[0];
		heapify(a, size - i - 1, 0);
	}
}

//最小放最前的直接选择排序
	void selectSort(int a[], int size); {
	for (int i = 0; i < size; i++){
		//无序区间 [i,size)
		//有序区间 [0，i)
		int min = i;
		for (int j = i+1; j < size; j++){
			if (a[j]<a[min]){
				min = j;
			}
		}
		//交换
		int t = a[min];
		a[min] = a[i];
		a[i] = t;
	}
}

//冒泡排序
//时间复杂度
//最好—O（n）—有序
//最坏—O(n^2)—逆序
//平均—O(n^2)
//空间复杂度:O(n)
//稳定性：稳定的
	void bubbleSort(int a[], int size); {
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size - i - 1; j++){
			//有序部分:[size-i,size)
			//无序部分:[0,size-i)
			if (a[j]>a[j + 1]){
				swap(a + j, a + j + 1);
			}
		}
		else{
			break;
		}
	}
}

//归并排序
//时间复杂度：O(n*log(n))
//空间复杂度：O(n)
//稳定性；稳定
void mergeArray(int a[], int first, int mid, int end, int temp[]){
//合并两个有序区间的算法	
	int k = 0;
	int i = first, m = mid;
	int j = mid + 1, n = end;
	while (i <= m && j <= n){
		if (a[i] <= a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}
	while (i <= m)
		temp[k++] = a[i++];
	while (j <= n)
		temp[k++] = a[j++];
	for (i = 0; i < k; ++i)  //将有序串拷贝到原来的区间
		a[first + i] = temp[i];
}

void mergesort(int a[], int first, int end, int temp[]){
//递归划分	
	if (first < end)
		{
			int mid = (end + first) >> 1;
			mergesort(a, first, mid, temp);  //左边有序
			mergesort(a, mid + 1, end, temp);  //右边有序
			mergeArray(a, first, mid, end, temp);  //合并两个有序数列
		}
	}

void MergeSort(int a[], int n){
	int* p = new int[n];
	assert(p);
	mergesort(a, 0, n - 1, p);
	delete[] p;
}

//基数排序
//应用：数据密集的集中在某个范围中
void CountSort(int a[], int size){
	//1.计算数据范围
	int minValue = a[0];
	int maxValue = a[0];
	for (int i = 0; i < size; i++){
		if (a[i]<minValue)
			minValue = a[i];
		if (a[i]>maxValue)
			maxValue = a[i];
	}
	//2.获取计数空间
	int range = maxValue - minValue + 1;
	int *temp = (int*)malloc((maxValue - minValue + 1)*sizeof(int));
	if (NULL == temp)
		return;
	//3.统计每个元素出现次数
	for (int i = 0; i < sie; i++){
		temp[a[i] - minValue]++;
		//回收
		for (int i = 0; i < range; i++){
			while (temp[i]){
				a[index++] = i + minValue;
				temp[i]--;
			}
		}
		free(temp);
	}
}

int main()
{
	int a[] = { 9, 5, 2, 7, 3, 6, 4, 8 };
	insertSort(a, 8);
	for (int i = 0; i < 8; i++){
		printf("%d ", a[i]);
	}
	system("pause");
}
