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
void dltSpecific(int loc)
{
 if(head==NULL)
 {
 	printf("The CLL is empty\n");
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
	insertEnd(10);
	insertEnd(20);
	insertEnd(30);
	insertEnd(40);
	dltSpecific(2);
	return 0;	
}
