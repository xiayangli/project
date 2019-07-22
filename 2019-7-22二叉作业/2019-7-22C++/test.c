#define _CRT_SECURE_NO_WARNINGS 1
/*
typedef char BTDataType;

typedef struct BTNode
{
	struct BTNode* _pLeft;
	struct BTNode* _pRight;
	BTDataType _data;
}BTNode;



// 1. ����������
BTNode* CreateBinTree(BTDataType* array, int size){
	BTDataType data;
	scanf("%d", &data);
	if(data == 0){
		array = NULL;
	}
	else{
		array = (BTNode*)malloc(sizeof(BTNode));
		array->data = data;
		size++;
		CreateBinTree(array->pLeft, size);
		CreateBinTree(array->pRight, size);
	}
	return array;
}

// ���������� 
BTNode* CopyBinTree(BTNode* pRoot){
	if (pRoot == NULL)
	return;
	BTNode* Node = (BTNode*)malloc(sizeof(BTNode));
	Node->data = pRoot->data;
	Node->pLeft = CopyBinTree(pRoot->pLeft);
	Node->pRight = CopyBinTree(pRoot->pRight);
	return Node;
}

// ���ٶ����� 
void DestroyBinTree(BTNode** pRoot){
	if (*pRoot == NULL){
		return;
	}
	if ((*pRoot)->pLeft != NULL){
		DestroyBinTree((*pRoot)->pLeft);
	}
	if ((*pRoot)->pRight != NULL){
		DestroyBinTree((*pRoot)->pRight);
	}
	free(pRoot);
	*pRoot = NULL;
}
*/
//�����������ֱ�����ʽ
//ǰ�����
void preOrderTraversal(Node *root) {
	if (root == NULL) {
		return;
	}
	printf("%c ", root->value);
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}
//�������
void inOrderTraversal(Node *root) {
	if (root == NULL) {
		return;
	}
	inOrderTraversal(root->left);
	printf("%c ", root->value);
	inOrderTraversal(root->right);
}
//�������
void postOrderTraversal(Node *root) {
	if (root == NULL) {
		return;
	}
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	printf("%c ", root->value);
}

//��ȡ�������нڵ�ĸ��� 
int count = 0;
void getNodeCount(Node *root) {
	if (root == NULL) {
		return;
	}
	getNodeCount(root->left);
	count++;
	getNodeCount(root->right);
}

// ��������ĸ߶� 

int myMax(int a, int b) {
	return a >= b ? a : b;
}

int getHeight(Node *root) {
	if (root == NULL) {
		return 0;
	}
	int left = getHeight(root->left);
	int right = getHeight(root->right);
	return myMax(left, right) + 1;
}

// ��ȡ��������Ҷ�ӽڵ�ĸ��� 
int getLeafCount(Node *root) {
	if (root == NULL) {
		return 0;
	}
	else if (root->left == NULL && root->right == NULL) {
		return 1;
	}
	else {
		return getLeafCount(root->left) + getLeafCount(root->right);
	}
}

// ��ȡ��������K��ڵ�ĸ��� 
int getKLevelCount(Node *root, int k) {
	assert(k >= 1);
	if (root == NULL) {
		return 0;
	}
	else if (k == 1) {
		return 1;
	}
	else {
		return getKLevelCount(root->left, k - 1)
			+ getKLevelCount(root->right, k - 1);
	}
}