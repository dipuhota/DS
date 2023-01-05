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
	printf("%d val Node inserted Sucessfully at Begining\n",val);
}
void length()
{
	int l=0;
if(head==NULL)
{
	printf("The LL is empty\n");
	}	
	else
	{
		struct node *ptr=head;
		while(ptr!=NULL)
		{
			l++;
			ptr=ptr->next;
		}
	}
	printf("The single LL have %d no. of nodes\n",l);
	
}
int main()
{
	struct node *head=NULL;
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	length();
	return 0;
}
