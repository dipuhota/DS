#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert(int val)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
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
	printf("%d value node inserted successfully\n",val);
}
void del_first(struct node *head)
{
	if(head==NULL)
	{
		printf("LL is empty\n");
		
	}
	else
	{
	 struct node *temp=head;
	 head=head->next;
	 free(temp);
	 temp=NULL;
	 printf("first node deleted successfully\n");
	}
}
void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	del_first(head);
	display();
	return 0;
}
