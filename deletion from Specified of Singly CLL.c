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
//	printf("%d inserted at Begin of the CLL\n",val);
}
void dltSpecific(int loc)
{
	    struct node *temp=head;
 		struct node *help=head;
 		while(loc!=1)
 		{
 			temp=temp->next;
 			loc--;
		 }
		 while(help->next!=temp)
 		{
 			help=help->next;
		 }
		 help->next=temp->next;
		 temp->next=NULL;
		printf("%d was deleted from %d location the LL\n",temp->data,loc);
 		free(temp);
}
void displayList()
{
	printf("The values of the Singly CLL are:\n");
	struct node *temp=head;
	do{
		printf("%d\t",temp->data);
		temp=temp->next;
	} while(temp!=head);
}
int main()
{
	insertBeg(30);
	insertBeg(20);
	insertBeg(10);
	dltSpecific(2);
	displayList();
	return 0;
}
