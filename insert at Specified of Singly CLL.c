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
void insertSpecific(int val,int loc)
{
	struct node *newNode,*temp=head;
	newNode= (struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	int i=0;
	for(i=0;i<loc-1;i++){
		temp=temp->next;
	}
	newNode->next=temp->next;
   temp->next=newNode;
   
	
	printf("\n%d inserted at %d position successfully\n",val,loc);
	
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
	insertBeg(30);
	insertBeg(20);
	insertBeg(10);
	insertSpecific(999,2);
	displayList();
	return 0;
}
