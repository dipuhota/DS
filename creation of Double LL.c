#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=NULL;
int main(){
	//creation of node variable
	struct node *first, *middle,*last;
	//allocate memory
	first=(struct node*)malloc(sizeof(struct node));
	middle=(struct node*)malloc(sizeof(struct node));
	last=(struct node*)malloc(sizeof(struct node));
	//assinging values
	first->data=10;
	middle->data=20;
	last->data=30;
	//linking each nodes
	first->prev=NULL;
	first->next=middle;
	middle->prev=first;
	middle->next=last;
	last->prev=middle;
	last->next=NULL;	
}
