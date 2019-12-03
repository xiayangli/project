typedef int DataType;
typedef int(*Compare)(DataType, DataType);
typedef struct Heap
{
	DataType* _array;
	int _capacity;
	int _size;
	Compare _com;
}Heap;

#define MAX_SIZE 10
void InitHeap(Heap* hp, Compare com);
void CreateHeap(Heap* hp, DataType* array, int size);
void InsertHeap(Heap* hp, DataType data);
DataType TopHeap(Heap* hp);
int EmptyHeap(Heap* hp);
int SizeHeap(Heap* hp);
void DeleteHeap(Heap* hp);
void DestroyHeap(Heap* hp);
int Less(DataType left, DataType right);
int Greater(DataType left, DataType right);
void testHeap();