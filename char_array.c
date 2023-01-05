#include<stdio.h>
#include<string.h>
int main()
{
	char name[100]="";
	
	printf("Enter your name \n");
	gets(name);
	
	printf("Your name is  %s",name);
	
    printf("%s",name);
	
	puts(name);
	
	
	return 0;
}

