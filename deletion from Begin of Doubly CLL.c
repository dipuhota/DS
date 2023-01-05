#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=NULL;

void insertEnd(int val){
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	if(head==NULL){
		newNode->prev=NULL;
		newNode->next=newNode;
		head=newNode;
		printf("%d inserted successful\n",val);
	}
	else{
		struct node *temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->prev=temp;
		newNode->next=head;
		head->prev=newNode;	
		printf("%d inserted successfully at the end\n",val);
	}
}
void dltBeg()
{
 if(head==NULL)
 {
 	printf("The CLL is empty\n");
	 }	
	 else
	 {
	 	struct node *help=head;
	 	while(help->next!=head)
	 	{
	 		help=help->next;
		 }
		 struct node *temp=head;
	 	printf("%d was deleted from the dubly CLL\n",temp->data);
		 head=head->next;
		 head->prev=help;
		 help->next=head;
	 	
	 	free(temp);
	 }
	
}
int main()
{
	insertEnd(10);
	insertEnd(20);
	insertEnd(30);
	dltBeg();
	return 0;	
}
