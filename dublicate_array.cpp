//Wap to find the duplicate elements in array
#include<stdio.h>
int main()
{
	int a[]={10,20,10,30,40,50,50},i,j;
	printf("These are dublicate elements:\n");
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{ 
			if (a[i]==a[j])
			{ 
				printf("%d\n",a[j]);
			}
		}
	}
	return 0;
	
}
