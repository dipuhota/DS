#include<stdio.h>
int main()
{
	int c,fact=1,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		fact=fact*c;
	
	}
	printf("%d",fact);
}
