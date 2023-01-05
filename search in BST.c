#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *left;
	int key;
	struct node *right;
};
struct node *root=NULL;
struct node *getNewNode(int val)
{
	struct node *newNode;
	newNode =(struct node*)malloc(sizeof(struct node));
	newNode->key=val;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
struct node *insert(struct node *root,int val)
{
	if(root==NULL)
	{
		return getNewNode(val);
	}
	if(root->key<val)
	{
		root->right=insert(root->right,val);
	}
	else if(root->key>val)
	{
		root->left=insert(root->left,val);
	}
	return root;
}
void inorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	printf("%d  ",root->key);
	inorder(root->right);
}
int search(struct node *root,int key)
{
	if(root==NULL)
		return 0;

	if(root->key==key)
		return 1;
	
	if(root->key<key)
		return search(root->right,key);
	
	else
		return search(root->left,key);	
}
int main()
{
  	root=insert(root,100);
	root=insert(root,50);
	root=insert(root,200);
	root=insert(root,150);
	root=insert(root,300);
	int srch=search(root,50);
//	Here 0=Success and 1=Failure 
	printf("%d ",srch);		
	return 0;
}
