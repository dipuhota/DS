#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int CQueue[SIZE],rear=-1,front=-1;
void enqueue(int);

void enqueue(int val)
{
	if((rear==SIZE-1 && front==0)||(front==rear+1))
	{
	printf("Circular queue is full ...insertion possible\n");
	}
	else if(rear==SIZE-1 && front!=0)
	{
		rear=-1;
		rear++;
		CQueue[rear]=val;
		printf("\nInsertion Success!!!\n");
		
		if (front==-1)
		{
			front=0;
		}
		
	}
}

	
int main()
{
	enqueue(23);
	
	return 0;
}

