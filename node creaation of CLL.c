#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *first,*middle,*last;
	first=(struct node*)malloc(sizeof(struct node));
	middle=(struct node*)malloc(sizeof(struct node));
	last=(struct node*)malloc(sizeof(struct node));
	
	first->data=10;
	middle->data=20;
	last->data=30;
	
	first->next=middle;
	middle->next=last;
	last->next=first;
	
	struct node *temp=first;
	do{
	  printf("%d\t",temp->data);
	  temp=temp->next;
	} while(temp!=first);
	return 0;
}
