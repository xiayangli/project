#define _CRT_SECURE_NO_WARNINGS 1
/*
typedef char BTDataType;

typedef struct BTNode
{
	struct BTNode* _pLeft;
	struct BTNode* _pRight;
	BTDataType _data;
}BTNode;



// 1. 创建二叉树
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

// 拷贝二叉树 
BTNode* CopyBinTree(BTNode* pRoot){
	if (pRoot == NULL)
	return;
	BTNode* Node = (BTNode*)malloc(sizeof(BTNode));
	Node->data = pRoot->data;
	Node->pLeft = CopyBinTree(pRoot->pLeft);
	Node->pRight = CopyBinTree(pRoot->pRight);
	return Node;
}

// 销毁二叉树 
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
//二叉树的三种遍历方式
//前序遍历
void preOrderTraversal(Node *root) {
	if (root == NULL) {
		return;
	}
	printf("%c ", root->value);
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}
//中序遍历
void inOrderTraversal(Node *root) {
	if (root == NULL) {
		return;
	}
	inOrderTraversal(root->left);
	printf("%c ", root->value);
	inOrderTraversal(root->right);
}
//后序遍历
void postOrderTraversal(Node *root) {
	if (root == NULL) {
		return;
	}
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	printf("%c ", root->value);
}

//获取二叉树中节点的个数 
int count = 0;
void getNodeCount(Node *root) {
	if (root == NULL) {
		return;
	}
	getNodeCount(root->left);
	count++;
	getNodeCount(root->right);
}

// 求二叉树的高度 

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

// 获取二叉数中叶子节点的个数 
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

// 获取二叉树第K层节点的个数 
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