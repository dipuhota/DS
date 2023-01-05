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
struct node  *minNode(struct node *root)
{
	struct node *temp=root;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	 } 
	 return temp->key;
}
struct node  *maxNode(struct node *root)
{
	struct node *temp=root;
	while(temp->right!=NULL)
	{
		temp=temp->right;
	 } 
	 return temp->key;
}
int main()
{
  	root=insert(root,100);
	root=insert(root,50);
	root=insert(root,200);
	root=insert(root,150);
	root=insert(root,300);
	
	int min = minNode(root);
	printf("Min value is %d\n",min);
	int max=maxNode(root);
	printf("Max value is %d\n",max);		
	return 0;
}
