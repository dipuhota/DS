#include<stdio.h>
#include<stdio.h>
struct node{
	int data;
	struct node *next;
};
	struct node *head=NULL;
void insertSpecific(int val,int loc)
{
	struct node *newNode,*temp=head;
	newNode =(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	newNode->next=NULL;
	// traversing
	while(loc!=1)	

	{
		temp=temp->next;
		loc--;
	}
	newNode->next=temp->next;
	temp->next=newNode;
	printf("%d inserted at specified position successfully \n",val);
}
int main()
{
	struct node *head=NULL;
	insertSpecific(999,2);
	return 0;
}
