#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
 struct node *head=NULL;
 void delSpecific(int loc)
 {
 	if(head!=NULL)
 	{
 		struct node *temp=head;
 		struct node *help=head;
 		while(loc!=1)
 		{
 			temp=temp->next;
 			loc--;
		 }
		 while(help->next!=temp)
 		{
 			help=help->next;
		 }
		 help->next=temp->next;
		 temp->next=NULL;
		printf("%d was deleted from %d location the LL\n",temp->data,loc);
 		free(temp);
	 }
	 else
	 {
	 printf("The LL is empty\n");	
	 }
 }
 int main()
 {
 	delSpecific(2);
 	
 	return 0;
 }
