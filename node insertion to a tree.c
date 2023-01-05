#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *left;
	int data;
	struct node *right;
};
struct node *root=NULL;
struct node* insert(struct node *root,int val)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	int count=0;
	if(root==NULL)
	{
		newNode->left=NULL;
		newNode->right=NULL;
		root=newNode;
		count++;
	}
	else{
		if(count%2!=0)
		{
			root->left=insert(root->left,val);
		}
		else
		{
			root->right=insert(root->right,val);
		}
		
	}
	return root;
	
}
int main()
{
	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,30);
	root=insert(root,40);
	root=insert(root,50);
	root=insert(root,60);
	root=insert(root,70);
	return 0;
}
