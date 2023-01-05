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
		newNode->next=NULL;
		head=newNode;
		printf("%d inserted successfully at the end\n",val);
	}
	else{
		struct node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->prev=temp;
		newNode->next=NULL;	
		printf("%d inserted successfully at the end\n",val);
	}
}

int main()
{
	insertEnd(10);
	insertEnd(20);
	insertEnd(30);
	insertEnd(40);
}

