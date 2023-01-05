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
void insertSpecific(int val,int pos){
	int i;
	struct node *newNode,*temp=head;
	newNode=(struct node*)malloc(sizeof(struct node));
	
	newNode->data=val;
	
	for(i=0;i<pos-1;i++){
		temp=temp->next;
	}
	
	temp->next->prev=newNode;
	newNode->next=temp->next;
	newNode->prev=temp;
	temp->next=newNode;
	
	printf("\n%d inserted at %d position successfully of Dubly CLL\n",val,pos);
}
int main()
{
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	insertSpecific(999,2);
	return 0;
}

