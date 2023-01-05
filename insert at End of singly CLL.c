#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertBeg(int);
void insertBeg(int val)
{
	struct node *newNode;
	newNode= (struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	if(head==NULL)
	{
		newNode->next=newNode;
		head=newNode;
	}
	else{
		struct node *temp=head;
		while(temp->next!=head)
		{
		 temp=temp->next;	
		}
		temp->next=newNode;
		newNode->next=head;
		head=newNode;
	
	}
	printf("%d inserted at Begin of the CLL\n",val);
}
void insertEnd(int val)
{
	struct node *newNode;
	newNode= (struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	if(head==NULL)
	{
		newNode->next=newNode;
		head=newNode;
	}
	else{
		struct node *temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->next=head;
	}
	printf("%d inserted at Last of the CLL\n",val);	
}

int main()
{
	insertBeg(40);
	insertBeg(30);
	insertBeg(20);
	insertEnd(10);
	displayList();
	return 0;
}
