/* Binary tree traversal: Preorder, Inorder, and Postorder  */
#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;

};
struct node *newNode(int data);
struct node *BSTinsert(struct node *root,int data);
void printInOrder(struct node *root);
void printPreOrder(struct node *root);
void printPostOrder(struct node *root);
main()
{
	struct node *root=NULL;
	root=BSTinsert(root,7);
	root=BSTinsert(root,1);
	root=BSTinsert(root,9);
	root=BSTinsert(root,0);
	root=BSTinsert(root,3);
	root=BSTinsert(root,2);
	root=BSTinsert(root,5);
	root=BSTinsert(root,4);
	root=BSTinsert(root,6);
	root=BSTinsert(root,8);
	root=BSTinsert(root,10);
	printf("\n\nInorder traversal:  ");
	printInOrder(root);
	printf("\nPreorder traversal:  ");
	printPreOrder(root);
	printf("\nPostorder traversal:  ");
	printPostOrder(root);
	printf("\n\n\n");

}
void printPostOrder(struct node *root)
{
	if(root!=NULL){
		printPostOrder(root->left);
		printPostOrder(root->right);
		printf("%d ",root->data);
	}
}
void printPreOrder(struct node *root)
{
	if(root!=NULL){
		printf("%d ",root->data);
		printPreOrder(root->left);
		printPreOrder(root->right);
	}
}
void printInOrder(struct node *root)
{
	if(root!=NULL){
		printInOrder(root->left);
		printf("%d ",root->data);
		printInOrder(root->right);
	}
}
struct node *BSTinsert(struct node *root,int data)
{
	if(root==NULL)
		return newNode(data);
	else{
		if(root->data >= data){
			root->left=BSTinsert(root->left,data);
		}else{
			root->right=BSTinsert(root->right,data);
		}
		return root;
	}

}
struct node *newNode(int data)
{
	struct node *new=malloc(sizeof(struct node));
	new->data=data;
	new->left=NULL;
	new->right=NULL;
	return new;

}
