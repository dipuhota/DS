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
void dltSpecific(int loc)
{
 if(head==NULL)
 {
 	printf("The DLL is empty\n");
	 }
	 else{
	 	struct node *temp=head;
	 	while(loc!=1)
		 {
	 		temp=temp->next;
	 		loc--;
		 }
		
		 temp->prev->next=temp->next;
		 temp->next->prev=temp->prev;
		  printf("%d was deleted from %d location of DLL\n ",temp->data,loc);
		 temp->prev=NULL;
		 temp->next=NULL;
		 free(temp);
	 }	
	
}

int main()
{
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	dltSpecific(3);
	return 0;
}
