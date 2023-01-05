#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertBegin(int);
void insertBegin(int val)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	if(head==NULL)
	{
		newNode->prev=NULL;
		newNode->next=NULL;
		head=newNode;
	}
	else
	{
	  newNode->prev=NULL;
	  newNode->next=head;
	  head->prev=newNode;
	  head=newNode;	
	}
	printf("%d is inserted successfully at Begining of DLL\n",val);
}

void dltBeg()
{
 if(head==NULL)
 {
 	printf("The DLL is empty\n");
	 }	
	 else
	 {
	 	struct node *temp=head;
	 	head=head->next;
	 	printf("%d was deleted from the DLL\n",temp->data);
	 	head->prev=NULL;
	 	free(temp);
	 }
	
}

int main()
{
	insertBegin(40);
	insertBegin(30);
	insertBegin(20);
	insertBegin(10);
	dltBeg();
	return 0;
}
