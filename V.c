#include<stdio.h>
int main()
{
	int a,i;
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
return 0;	
}
