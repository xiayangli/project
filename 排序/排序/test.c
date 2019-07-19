#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

//��������
void insertSortTest(int a[], int size){
	for (int i = 0; i < size; i++){
		//��������[0��i)
		//��������[i,size)

		//ץ�������ƣ�
		//ȥ��������ѡ�����λ�ã��Ӻ���ǰ�ң�
		for (int j = i - 1; j >= 0; j--){
			if (a[i]>=a[j]){
				break;
			}
		}
		int j;
		int index = j + 1;
		//�ٰ�[i]���뵽���ʵ��±�
		int k = a[i];
		//k���뵽indexλ��
		for (int t = i - 1; t >= index; t--){
			a[t + 1] = a[t];
		}
		a[index] = k;
	}
}

//�ȶ��ԣ��ȶ�
//ʱ�临�Ӷȣ���á�O��n�����������O��n^2��������;ƽ����O(n^2)�������
//�ռ临�Ӷȣ���á�O��1�����/ƽ����O(n^2)
//�ϲ�ֱ�Ӳ�������
void insertSort(int a[], int size){
	for (int i = 0; i < size; i++){
		//����[0,i)
		//����[i,size)
		int k = a[i];
		int j;
		for (j = i - 1; i >= 0 && k < a[j]; j--){
			a[j + 1] = a[j];
		}
		a[j + 1] = k;
	}
}


//����ֱ�Ӳ�������
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

//ϣ������
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

//ѡ������
//ͨ�������������䣬�ҵ������������������±�
//���� �������������� �� ��������������
//�ȶ��ԣ����ȶ�
//ʱ�临�Ӷȣ�O��n^2��     ���ݲ�����
//�ռ临�Ӷȣ�O��1��
void selectSort(int a[], int size){
	for (int i = 0; i < size; i++){
		//�������� [0,size-i)
		//�������� [size-i,size)
		int max = 0;
		for (int j = 1; j < size - i; j++){
			if (a[j]>a[max]){
				max = j;
			}
		}
		//����
		int t=a[max];
		a[max] = a[size - i - 1];
		a[size - i - 1] = t;
	}
}

//���µ���
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

//����
void createHeap(int a[], int size){
	for (int i = (size - 2 / 2); i >= 0; i--){
		heapify(a, size, i);
}

//������
//�ȶ��ԣ����ȶ�
//ʱ�临�Ӷȣ�O��n*log(n))
//�ռ临�Ӷȣ�O��1��
	void heapSort(int a[], int size); {
	//1.����
	createHeap(a, size);
	//2.��Ҫsize��
	for (int i = 0; i < size; i++){
		//�������� [0,size-i)
		//�������� [size-i,size)
		int t = a[0];
		a[0] = a[size - i - 1];
		a[size - i - 1] = a[0];
		heapify(a, size - i - 1, 0);
	}
}

//��С����ǰ��ֱ��ѡ������
	void selectSort(int a[], int size); {
	for (int i = 0; i < size; i++){
		//�������� [i,size)
		//�������� [0��i)
		int min = i;
		for (int j = i+1; j < size; j++){
			if (a[j]<a[min]){
				min = j;
			}
		}
		//����
		int t = a[min];
		a[min] = a[i];
		a[i] = t;
	}
}

//ð������
//ʱ�临�Ӷ�
//��á�O��n��������
//���O(n^2)������
//ƽ����O(n^2)
//�ռ临�Ӷ�:O(n)
//�ȶ��ԣ��ȶ���
	void bubbleSort(int a[], int size); {
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size - i - 1; j++){
			//���򲿷�:[size-i,size)
			//���򲿷�:[0,size-i)
			if (a[j]>a[j + 1]){
				swap(a + j, a + j + 1);
			}
		}
		else{
			break;
		}
	}
}

//�鲢����
//ʱ�临�Ӷȣ�O(n*log(n))
//�ռ临�Ӷȣ�O(n)
//�ȶ��ԣ��ȶ�
void mergeArray(int a[], int first, int mid, int end, int temp[]){
//�ϲ���������������㷨	
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
	for (i = 0; i < k; ++i)  //�����򴮿�����ԭ��������
		a[first + i] = temp[i];
}

void mergesort(int a[], int first, int end, int temp[]){
//�ݹ黮��	
	if (first < end)
		{
			int mid = (end + first) >> 1;
			mergesort(a, first, mid, temp);  //�������
			mergesort(a, mid + 1, end, temp);  //�ұ�����
			mergeArray(a, first, mid, end, temp);  //�ϲ�������������
		}
	}

void MergeSort(int a[], int n){
	int* p = new int[n];
	assert(p);
	mergesort(a, 0, n - 1, p);
	delete[] p;
}

//��������
//Ӧ�ã������ܼ��ļ�����ĳ����Χ��
void CountSort(int a[], int size){
	//1.�������ݷ�Χ
	int minValue = a[0];
	int maxValue = a[0];
	for (int i = 0; i < size; i++){
		if (a[i]<minValue)
			minValue = a[i];
		if (a[i]>maxValue)
			maxValue = a[i];
	}
	//2.��ȡ�����ռ�
	int range = maxValue - minValue + 1;
	int *temp = (int*)malloc((maxValue - minValue + 1)*sizeof(int));
	if (NULL == temp)
		return;
	//3.ͳ��ÿ��Ԫ�س��ִ���
	for (int i = 0; i < sie; i++){
		temp[a[i] - minValue]++;
		//����
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
