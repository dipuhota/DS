#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
 struct node *head=NULL;
 void delBegin()
 {
 	if(head!=NULL)
 	{
 		struct node *temp=head;
 		head=head->next;
 		printf("%d was deleted from the LL\n",temp->data);
 		temp->next=NULL;
 		free(temp);
	 }
	 else
	 {
	 printf("The LL is empty\n");	
	 }
 }
 int main()
 {
 	delBegin();
 	
 	return 0;
 }
