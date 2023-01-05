#include<stdio.h>
#include<stdlib.h>
struct node{
	int key;
	struct node *left;
	struct node *right;
	int height;
};
struct node *root=NULL;
int height(struct node *root)
{
    if (root== NULL)
        return 0;
    return 1+max(height(root->left), height(root->right));
}
int max(int a,int b)
{
    return (a>b)?a:b;
}
struct node *rightRotate(struct node *root)
{
    struct node *temp = root->left;
    struct node *help = temp->right;
 
    // Perform rotation
    temp->right = root;
    root->left = help;
 
    // Update heights
    root->height = height(root);
    temp->height = height(temp);
 
    // Return new root
    return temp;
}
struct node *leftRotate(struct node *root)
{
    struct node *temp = root->right;
    struct node *help = temp->left;
 
    // Perform rotation
    temp->left =root;
    root->right = help;
 
    //  Update heights
    root->height = height(root);
    temp->height = height(temp);
 
    // Return new root
    return temp;
}
// Get Balance factor of node root
int getBalance(struct node *root)
{
    if (root==NULL)
        return 0;
    return height(root->left)-height(root->right);
}
struct node *getNewNode(int val)
{
	struct node *newNode;
	newNode=(struct node *)malloc(sizeof(struct node));
	newNode->key=val;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
struct node *insert(struct node *root,int val)
{
	if(root==NULL)
	return getNewNode(val);
	else if(root->key<val)
	{
		root->right=insert(root->right,val);
	}
	else if(root->key>val)
	{
		root->left=insert(root->left,val);
		
	}
	
	root->height=height(root);
	int balance=getBalance(root);
	
	// Left Left Case
	 if (balance>1 && val<root->left->key)
        return rightRotate(root);
        
         // Right Right Case
    if (balance<-1 && val>root->right->key)
        return leftRotate(root);
 
    // Left Right Case
    if (balance>1 && val>root->left->key)
    {
        root->left=leftRotate(root->left);
        return rightRotate(root);
    }
 
    // Right Left Case
    if (balance<-1 && val<root->right->key)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
     return root;   
	}
//	struct node preOrder(struct node *root )
//	{
//		if(root==NULL)
//		return;
//		printf("%d ",root->key);
//		preOrder(root->left);
//		preOrder(root->right);
//	}

//void inorder(struct node *root)
//{
//	if(root==NULL)
//	return;
//	inorder(root->left);
//	printf("%d ",root->key);
//	inorder(root->right);
//}
void postorder(struct node *root)
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->key);
}
	
int main()
{
	//50 , 20 , 60 , 10 , 8 , 15 , 32 , 46 , 11 , 48
	root=insert(root,50);
	root=insert(root,20);
	root=insert(root,60);
	root=insert(root,10);
	root=insert(root,8);
	root=insert(root,15);
	root=insert(root,32);
	root=insert(root,46);
	root=insert(root,11);
	root=insert(root,48);
//	preOrder(root);
//    inorder(root);
    postorder(root);
	return 0;
	}	
	

