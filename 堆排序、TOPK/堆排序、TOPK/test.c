#define _CRT_SECURE_NO_WARNINGS 1


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
}

//堆排序
void heapSort(int a[], int size) {
	createHeap(a, size);
	for (int i = 0; i < size; i++){
		int t = a[0];
		a[0] = a[size - i - 1];
		a[size - i - 1] = a[0];
		heapify(a, size - i - 1, 0);
	}
}

int main(){
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int size = sizeof(a) / sizeof(a[0]);
	heapSort(a, size);

}

//TOPK