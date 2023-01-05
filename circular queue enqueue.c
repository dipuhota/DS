#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int cqueue[SIZE],front=-1,rear=-1;
void enqueue(int);

void enqueue(int n)
{
	if((front==0 && rear==SIZE-1)||(front==rear+1))
	printf("\n Circular Queue is full....insertion not possible\n");
	else
	{
		if(rear==SIZE-1 && front!=0)
		rear=-1;
		
		rear++;
		cqueue[rear]=n;
		printf("\nInsertion successful\n");
		if(front=-1)
		 front=0;
	}
}
int main()
{
	enqueue(11);
	enqueue(12);
	enqueue(13);
	enqueue(14);
	enqueue(15);
	return 0;
}
