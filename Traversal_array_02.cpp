//Input 10 numbers and display all the even numbers using array
#include<stdio.h>
int main()
{
	int num[10],i;
	printf("Enter 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		printf("Enter %d number \n",i+1);
		scanf("%d",&num[i]);
		
	}
	printf("------------------\n");
	for(i=0;i<10;i++)
	{
		if(num[i]%2==0)
		printf("The %d number is even and that is %d \n",i+1,num[i]);
	}
	return 0;
}
