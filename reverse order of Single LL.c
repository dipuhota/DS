//print Single LL is in reverse order
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertBegin(int); //prototype
int printReverse(struct node *temp);
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
	
}
int printReverse(struct node *head)
{
	struct node *temp=head;
	if(temp==NULL)
	{
     return;
	}
	printReverse(head->next);
	printf("%d \t ",head->data);
}
//	struct node *head=NULL;
int main()
{
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	int a=printReverse(head);                                                           
	return 0;
}
