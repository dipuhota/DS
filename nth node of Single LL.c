//Find the nth node of Single LL
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertBegin(int); //prototype
void insertBegin(int val)
{
	struct node *newNode;
	newNode =(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	if(head==NULL)
	{
		newNode->next=NULL;
		head=newNode;
	}
	else
	{
		newNode->next=head;
		head=newNode;
	}
	
}
int get_nth_node(int index)
{
	struct node *temp=head;
	int i=0;
	while(temp!=NULL)
	{
		if(i=index)
		{
			return temp->data;
		}
		i++;
		temp=temp->next;	
	}
	return -1;
}
int main()
{
	struct node *head=NULL;
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	insertBegin(50);
	int result=get_nth_node(12);
	printf("%d",result);
	return 0;
}
