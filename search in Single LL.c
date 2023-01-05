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
void search(int key )
{ int found=0;
	struct node *p=head;
	while(p!=NULL)
	{
		if(p->data==key)
		{
			found=1;
			break;
			
		}
		p=p->next;
	
	}
	if(found==1)
	{
		printf("Key found\n");
	}
	else
	{
		printf("Key not found\n");
	}
}
int main()
{
	struct node *head=NULL;
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	search(30);
	
	return 0;
}
