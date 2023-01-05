#include<stdio.h>
int main()
{
	int a,i;
	for(a=1;a<=5;a++)
	{
		for(i=1;i<=5;i++)
		{
			if(a==5 || i==1)
			{
				printf("L");
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
