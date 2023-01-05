//Find out the middle node of sindle LL
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
void midNode()
{
	struct node *temp=head;
	if(head==NULL){
		printf("Linked List is Empty\n");
	}
	else{
		int length;
		length=getLen();
		int i;
		for(i=0;i<length/2;i++){
			temp=temp->next;
		}
		printf("Middle Node value is %d\n",temp->data);
	}
}
int getLen()
{
	struct node *temp=head;
	int i=0;
	while(temp!=NULL){
		i++;
		temp=temp->next;
	}
	return i;
}

int main()
{
	struct node *head=NULL;
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	insertBegin(50);
	midNode();
	return 0;
}
