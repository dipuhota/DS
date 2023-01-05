#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int Cqueue[SIZE],front=-1,rear=-1;
void enqueue(int);
void dequeue();
void display();

void enqueue(int val)
{
	if((rear==SIZE-1 && front==0)||(front==rear+1))
	{
		printf("The Circular Queue is full...Insertion not possible\n");
	}
	
	else
	{
		if(rear=SIZE-1 && front!=0)
		rear=-1;
		
		rear++;
		Cqueue[rear]=val;
		printf("%d is inserted successfully\n",val);
		if(front==-1)
		front=0;
	}
}
void dequeue()
{ 
	if(front==-1 && rear==-1)
	printf("The Circular is empty...Deletion not possible\n");
	else
	{
    printf("%d is dequeued successfully\n",Cqueue[front]);
    front++;
    if(front-1==rear)
    front=rear=-1;
   
    else
    {
    	if(front==SIZE)
    	front=0;
  }		
 }
}
void display()
{
	if(front==-1)
	printf("Circular Queue is empty\n");
	else
	{
		int i=front;
	    printf("Circular Queue Elements are:\n");
	    if(front<=rear)
	    {
	    	while(i<=rear)
	    	printf("%d\t",Cqueue[i++]);
		}
		else
		{
			while(i<=SIZE-1)
			printf("%d\t",Cqueue[i++]);
			i=0;
			while(i<=rear)
			printf("%d\t",Cqueue[i++]);
		
		}	
	}
}

int main()
{
	int choice,element;
	printf("***QUEUE STORY***\n");
	while(1)
	{
		printf("\nSelect any one:\n");
		printf("1.enqueue\n2.dequeue\n3.display\n4.stop\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the element enque into Queue:\n");
				scanf("%d",&element);
				enqueue(element);
				break;
			case 2:
			    dequeue();
				break;
			case 3:
			    display();
				break;
			case 4:
			    exit(0);
				break;
			default:
			    printf("Invalid choice\n");				
		}
	}
	return 0;	
}
