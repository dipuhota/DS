
// insert at last
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertLast(int val)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
	}
	else
	{
		struct node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newNode;
	}
//	printf("%d inserted at last succcessfully");
}

 void splitLL(int pos)
 {
 	
 	struct node *help=head;
 	while(pos!=1)
 	{
 		help=help->next;
 		pos--;
	 }
	 help->next->next->next=head;
	 help->next=NULL;
 	
 }
 void display()
 {
  struct node *temp=head;
  while(temp->next !=NULL)
  {
  	printf("%d  ",temp->data);
  	temp=temp->next;
  	printf("%d  ",temp->data);
	  }	
 }
int main()
{
	insertLast(10);
	insertLast(20);
	insertLast(30);
	insertLast(40);
	insertLast(50);
	insertLast(60);
	splitLL(2);
	display();
	return 0;
}
