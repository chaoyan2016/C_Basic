#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

typedef struct TreeNode
{
	struct TreeNode* lchild;//������
	struct TreeNode* rchild;//������
	char elem;//�����
}TreeNode;//�����

TreeNode* BinaryTree(char *preorder, char *inorder, int len)//���������������򣬳���
{
	if (len <= 0)
		return NULL;
	TreeNode *root = (TreeNode*)malloc(sizeof(TreeNode));//�����ڴ�
	root->elem = preorder[0];//��Ϊ����ĵ�һ����root.elem(��ΪrootΪָ������->)
	int rootindex = -1;//��ֵ
	for (int i = 0; i < len; i++)//
	{
		if (inorder[i] == preorder[0])//�����е�ĳ���ڵ���������һ�������������ĸ��ڵ�
		{
			rootindex = i;
			break;
		}
	}
	//cout << root->elem << endl;
	//�����ȴ��ݸ�rootindex
	root->lchild = BinaryTree(preorder + 1, inorder, rootindex);//preorderΪ��ַ�����Ե�ַ��1��Ϊ�������һ��Ԫ�ء����������ͷ��ַ��Ȼ�����һ��̽Ѱ�����Ԫ�ء�
	root->rchild = BinaryTree(preorder + rootindex + 1, inorder + rootindex + 1, len - rootindex - 1);//inorderΪ��ַ�����Ե�ַ��1��Ϊ�������һ��Ԫ�ء����������ͷ��ַ��Ȼ�����һ��̽Ѱ�����Ԫ�ء�
	return root;//���ظ�
}

void Traversal(TreeNode *root)
{
	if (root != NULL)
	{
		Traversal(root->lchild);
		Traversal(root->rchild);
		cout << root->elem << endl;//��ʾ���Ĺ���
	}
}
int main()
{
	char inorder[100];//����
	char preorder[100];//����
	cout << "�������������У�" << endl;
	cin >> preorder;
	cout << "�������������У�" << endl;
	cin >> inorder;
	int len = strlen(preorder);//��ȡ����

	TreeNode * root = BinaryTree(preorder, inorder, len);//������������*root���ָ�����
	Traversal(root);//��Ϊ�����Ĳ���Ϊָ�����������ֱ�Ӵ����������ԣ�ͨ�����������ӡ���е����ڵ㡣

	return 0;
}