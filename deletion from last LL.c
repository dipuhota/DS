#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
 struct node *head=NULL;
 void delLast()
 {
 	if(head!=NULL)
 	{
 		struct node *temp=head;
 		struct node *help=head;
 		while(temp->next!=NULL)
 		{
 			temp=temp->next;
		 }
		 while(help->next!=temp)
 		{
 			help=help->next;
		 }
		 help->next=temp->next;
		 temp->next=NULL;
		printf("%d was deleted from the LL\n",temp->data);
 		free(temp);
	 }
	 else
	 {
	 printf("The LL is empty\n");	
	 }
 }
 int main()
 {
 	delLast();
 	
 	return 0;
 }
