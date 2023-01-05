#include<stdio.h>
int main()
{
	int a,i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(a=0;a<n;a++)
		{
			if(i==a)
			{
				printf("1");
			}
			else{
				printf("0");
			}
		}
		printf("\n");
	}
	
	return 0;
}
