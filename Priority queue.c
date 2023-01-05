#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int PQueue[SIZE],front=-1,rear=-1;
void enqueue(int);
void check(int);

void enqueue(int val)
{
	if(rear==SIZE-1){
	printf("The Queue is full ....Insertion not possible\n");
	return;
}
		if((front==-1)&&(rear==-1))
		{
			front++;
			rear++;
			PQueue[rear]=val;
			printf("%d is successfully inserted\n",val);
			
		}
		else
			check(val);
			rear++;
	}
void check(int val)
{
	int i,j;
	for(i=0;i<=rear;i++)
		{
	if(val>=PQueue[i])
	    {
			for(j=rear+1;j>i;j--)
			{
				PQueue[j]=PQueue[j-1];
				return;
			}
		}
		PQueue[i]=val;
	}
}
void display()
{
	int x;
	if((front==-1)&&(rear==-1))
	{
		printf("\nQueue is empty\n");
		return;
	}
	for(x=front;x<=rear;x++)
	{
		printf("%d \n",PQueue[x]);
	}
}
int main()
{
int choice,element;
while(1)
{
	printf("Select any one:\n");
	printf("1.enqueue\n2.display\n3.stop\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the element enque into Queue:\n");
				scanf("%d",&element);
				enqueue(element);
				break;
			case 2:
			    display();
				break;
			case 3:
			    exit(0);
				break;
			default:
			    printf("Invalid choice\n");				
		}
	}
	return 0;
}

