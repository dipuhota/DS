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
		newNode->next=newNode;
		head=newNode;
	}
	else
	{
		struct node *temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=newNode;
	  newNode->prev=temp;
	  newNode->next=head;
	  head->prev=newNode;
	  head=newNode;	
	}
	printf("%d is inserted successfully at Begining of Dubly CLL\n",val);
}
void displayList()
{
	struct node *temp=head;
	do{
		printf("%d\t",temp->data);
		temp=temp->next;
	} while(temp!=head);
}
int main()
{
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	displayList();
	return 0;
}
