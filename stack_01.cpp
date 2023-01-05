#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE],top=-1;
void push(int); // prototype
void pop(); // prototype
void display(); // prototype
void peek();// prototype

// insertion 
void push(int val){
	if (top==SIZE-1){
		printf("Stack is Full ... Insertion not possible\n");
	}
	else{
		top++;
		stack[top]=val;
		printf("%d is inserted successfully..\n",val);
	}
}

// deletion 
void pop()
{
	if (top==-1){
		printf("Stack is empty ...Deletion Not possible\n");
	}
	else{
		printf("%d poped successfully\n",stack[top]);
		top--;
	}	
}

void display(){
	int i;
	if(top==-1){
		printf("Nothing is there in the stack\n");
	}
	else{
		printf("The elements are ...\n");
		for(i=top;i>=0;i--){
			printf("%d\n",stack[i]);
		}	
	}
}

void peek()
{
	if (top==-1){
		printf("Stack is empty .. there is nothing to peek");
	}
	else{
		printf("The top element is %d",stack[top]);
	}
}

int main()
{
	int choice , element;
	
	printf("***STACK STORY****\n");
	printf("----------------------\n");
	
	while(1){
		printf("Select any one:\n");
		
		printf("1.push \n2.pop\n3.display\n4.peek\n5.stop\n");
		scanf("%d",&choice);
		switch(choice){
		case 1:
			printf("Enter element to push into the stack\n");
			scanf("%d",&element);
			push(element);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			peek();
			break;
		case 5:
			exit(0);
		default:
			printf("Invalid choice ... plz choice again\n");
	}
	}
	
       return 0;
}
