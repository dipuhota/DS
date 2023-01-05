#include<stdio.h>
#include<stdlib.h>
struct node{
	char data[20];
	struct node *next; 
};
struct node *head=NULL;
void insertBegin(char); //prototype
struct node* insertBegin(char *name)
{
    struct node *newNode;
	newNode =(struct node*)malloc(sizeof(struct node));
	strcpy(newNode->data,name);
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

printf("%s",name);

}

int main()
{
   struct node *name= insertBegin("Chandan");
	return 0;
}
