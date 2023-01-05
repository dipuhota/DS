#include<stdio.h>
int main()
{ int a,i;
	for(a=1;a<=5;a++)
	{
		for( i=1;i<=5;i++)
		{
			if(a==1||a==5)
			{
			printf("I ");	
			}	
	  else if(i==3)
		{
			printf("  I ");
		}
		else
		{
			printf(" ");
		}
	}
		printf("\n");
	}
	printf("\n\n\n");
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
	printf("\n\n\n");
	for(a=1;a<=5;a++)
	{
		for(i=1;i<=5;i++)
		{
			if(a==5 || a==1)
			{
				printf("O");
			}
			else if(i==1 || i==5)
			{
				printf("O");
		}
			else
			{
				printf(" ");
				
			}
		}
		printf("\n");	
	}
printf("\n\n\n");
for(a=1;a<=3;a++)
	{
		for(i=1;i<=5;i++)
		{
			if(a==i)
			{
				printf("V");
			}
			else if(i==5 &&a==1)
			{
				printf("V");
		    }
		    else if(i==4 &&a==2)
			{
				printf("V");
		    }
			else
			{
				printf(" ");
				
			}
		}
	printf("\n");	
	}
		printf("\n\n\n");
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
		printf("\n\n\n");
	for(a=1;a<=5;a++)
	{
		for( i=1;i<=5;i++)
		{
			if(i==1||i==5)
			{
			printf("U");	
			}
			
		
		
	  else if(a==5)
		{
			printf("U");
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
