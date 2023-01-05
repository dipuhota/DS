#include<stdio.h>
int main()
{
	int a[3][3]={{11,12,13},{14,15,16},{17,18,19}},key=15,i,j,found=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==key)
			{
		 found=1;
		     	}	
		}
	}
	if(found==1)
	{
		printf("key found   ");
	}
		else
			{
				printf("key not found");
			}
	
	return 0;
}
