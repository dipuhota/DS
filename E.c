#include<stdio.h>
int main()
{ int a,i;
	for(a=1;a<=5;a++)
	{
		for( i=1;i<=5;i++)
		{
			if(a%2!=0)
			{
			printf("E");
			}
		 else if(i==1)
		{
			printf("E");
		}
	
		else
		{
			printf(" ");
		 }
	}
		printf("\n");
	}
	return 0;
}
