#include<stdio.h>
#include<stdlib.h>
struct student{
	int roll;
	char name[20];
	char address[30];
}std;

int main()
{
	int S[5];
	for(i=0;i<5;i++)
	{
		printf("Enter the Details of %d student\n",i+1);
		printf("Enter name:");
		gets(std.name[i]);
			
	}
	return 0;
}
