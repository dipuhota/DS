#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *left;
	int key;
	struct node *right;
};
struct node *root=NULL;
struct node *getNewNode(int val)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->key=val;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
struct node *insert(struct node *root,int val)
{
	if(root==NULL)
	return getNewNode(val);
	
	else if(val>root->key)
	root->right=insert(root->right,val);
	
	else if(val<root->key)
	root->left=insert(root->left,val);
	
	return root;
}
// searching operation
int search (struct node *root,int val)
{
	if(root==NULL)
	return 0;
	if(root->key ==val)
	return 1;
	if(val>root->key)
	return search(root->right,val);
	else{
		return search(root->left,val);
	}
}
//display operation
void inorder(struct node *root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	printf("%d ",root->key);
	inorder(root->right);
}
//getting min value node in right subtree
int getRightMin(struct node *root)
{
	struct node *temp=root;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
	return temp->key;
}
//deletion operation
struct node *removeNode(struct node *root,int val)
{
	if(root==NULL){
		return NULL;
	}
	else if(val>root->key)
	{
		root->right=removeNode(root->right,val);
	}
	else if(val<root->key)
	{
		root->left=removeNode(root->left,val);
	}
	else{
		if(root->left==NULL  &&  root->right==NULL)
		{
			free(root);
			return NULL;
		}
		else if(root->left==NULL)
		{
			struct node *temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			struct node *temp=root->left;
			free(root);
			return temp;
		}
		else{
			int rightMin=getRightMin(root->right);
			root->key=rightMin;
			
			root->right=removeNode(root->right,rightMin);
		}
	}
	return root;
}
int main()
{
	root=insert(root,10);
	root=insert(root,5);
	root=insert(root,30);
	root=insert(root,40);
//	root=insert(root,2);
//	root=insert(root,3);
	root=insert(root,12);
//	root=insert(root,6);
	root=insert(root,67);
	root=insert(root,1);
	printf("Before Deletion\n");
	inorder(root);
	removeNode(root,5);
	removeNode(root,12);
//	removeNode(root,10);
	printf("\nAfter Deletion\n");
	inorder(root);
	int srch=search(root,40);
	printf("\n%d",srch);
	return 0;
}
