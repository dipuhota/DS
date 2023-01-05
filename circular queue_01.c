#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int Queue[SIZE],rear=-1,front=-1;
void enqueue(int);
void dequeue(); 
void display();

void enqueue(int val)
{
	if((rear==SIZE-1 &&  front==0 )||(front==rear+1))
	{
			printf("the Queue is full......Insertion not possible\n");
	}

	else
	{
		if(rear==SIZE-1 && front!=0)
		rear=-1;
		
		rear++;
		Queue[rear]=val;
		printf("%d is successfully inserted\n",val);
	}
}
	void dequeue()
	{
		if(front==rear)
		{
			printf("the Queue is empty... Deletion not possible\n");
			
		}
		else
		{ front++;
			printf("%d is deleted successfully\n",Queue[front]);
			
		}
	}
	void display()
	{
		if(rear==front)
		{
			printf("nothing is there to display\n");
		}
		else
		{
			int i;
			for(i=front;i<=rear;i++)
			{
				printf("%d\n",Queue[i]);
			}
		}
	}
	
int main()
{
	int choice,element;
	printf("***QUEUE THEORY***\n");
	printf("-------------------------\n");
	while(1)
	{
		printf("Select any one:\n");
		printf("1.enqueue\n2.dequeue\n3.display\n4.stop\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to insert into Queue:\n");
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
			   printf("Invalid choice...please choice again");
		}
	}
	return 0;
}

