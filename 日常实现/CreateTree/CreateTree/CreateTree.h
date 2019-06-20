#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include <stdlib.h>


typedef struct Node {
	char val;
	struct Node *left;
	struct Node *right;
}Node;

typedef struct {
	Node *root; //�����õ����ĸ��ڵ�
	int used;	//�������������õ���val����
}Result;

Result CreateTree(char preorder[], int size) {

	if (size == 0)
	{
		Result result;
		result.root = NULL;
		result.used = 0;

		return result;
	}
	char rootValue = preorder[0];
	if (rootValue == '#')
	{
		Result result;
		result.root = NULL;
		result.used = 1;

		return result;
	}

	//�������ڵ�
	Node *root = (Node *)malloc(sizeof(Node));
	root->val = rootValue;

	//����������
	Result left_result = CreateTree(preorder + 1, size - 1);
	//����������
	Result right_result = CreateTree(preorder + 1 + left_result.used, size - 1 - left_result.used);
	root->left = left_result.root;
	root->right = right_result.root;
	Result result;
	result.root = root;
	result.used = 1 + left_result.used + right_result.used;

	return result;
}
void PreordrerTraversal(Node *root){
	if (root == NULL){
		return;
	}
	printf("%c", root->val);
	PreordrerTraversal(root->left);
	PreordrerTraversal(root->right);
}


void TestCreateTree() {
	char *preorder = "AB#DE###C";
	int size = strlen(preorder);
	Result result = CreateTree("AB#DE###C", size);

	PreordrerTraversal(result.root);
}