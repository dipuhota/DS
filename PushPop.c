//WAP to perform push() and pop() operation using stack
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int Stack[SIZE],top=-1;

void push(int);
void pop();

void push(int val)
{
	if(top==SIZE-1)
	{
		printf("Stack is Full\n");
	}
	else{
		top++;
		Stack[top]=val;
		printf("%d is successfully pushed\n",val);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else{
		printf("%d is successfully poped out\n",Stack[top]);
		top--;
	}
}

int main()
{
	push(10);
	push(20);
	push(30);
    pop();
	
	return 0;
}
