#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertBegin(int); //prototype
void insertBegin(int val)
{
	struct node *newNode;
	newNode =(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	if(head==NULL)
	{
		newNode->next=NULL;
		head=newNode;
	}
	else
	{
		newNode->next=head;
		head=newNode;
	}
	printf("%d val Node inserted Sucessfully at Begining\n",val);
}
int main()
{
	struct node *head=NULL;
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	
	return 0;
}
