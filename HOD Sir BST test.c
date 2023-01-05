//BST all operations
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
void inorder(struct node *root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	printf("%d ",root->key);
	inorder(root->right);
}
int main()
{
root=insert(root,10);
root=insert(root,20);
root=insert(root,30);
root=insert(root,6);
root=insert(root,5);

removeNode(root,5);
inorder(root);	
	return 0;
}
