#include<stdio.h>
#include<ctype.h>
char Stack[100];
int top=-1;

void push(char x)
{
	Stack[++top]=x;
}

char pop()
{
	if(top==-1)
	{
		return -1;
	}
	else{
		
		return Stack[top--];
	}
}

int priority(char x)
{
	if(x=='(')
	return 0;
	if(x=='+' || x=='-')
	return 1;
	if(x=='*' || x=='/')
	return 2;
}

int main()
{
	char arr[100];
	char *p,x;
	printf("Enter the infix expression:\n");
	scanf("%d",arr);
	printf("\n");
	p=arr;
	
	while(*p !='\0')
	{
		if(isalnum(*p))
		{
			printf("%c ",*p);
		}
		else if(*p=='(')
		{
			push(*p);
		}
		else if(*p==')')
		{
			while(x=pop() !='(')
			{
				printf("%c ",x);
			}
		}
		else{
			while(priority(Stack[top]) >= priority(*p))
			{
				printf("%c ",pop());
				push(*p);
			}
			p++;
		}
		
		while(top != -1)
		{
			printf("%c ",pop());
		}
	}
	return 0;
}
