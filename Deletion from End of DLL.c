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
//	printf("%d is inserted successfully at Begining of DLL\n",val);
}
void dltEnd()
{
 struct node *temp=head;
 while(temp->next!=NULL)
 {
 	temp=temp->next;
 }

 temp->prev->next=NULL;
 temp->prev=NULL;
  printf("%d was deleted from the End of  the DLL\n",temp->data);
 free(temp);		
}

int main()
{
	insertBegin(40);
	insertBegin(30);
	insertBegin(20);
	insertBegin(10);
	dltEnd();
	return 0;
}
