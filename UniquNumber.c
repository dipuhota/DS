//WAP to print all the unique number inside an array
#include<stdio.h>
int main()
{
int a[10]={1,2,7,6,8,3,2,1,5,2};
int i,j;
for(i=0;i<10;i++)
{
	int found=0;
	for(j=0;j<10;j++)
	{
		if(a[i]==a[j])
		{
			found++;
		}

	
	}
			if(found==1)
	   {
		printf("%d ",a[i]);
		}

	}
	
	return 0;
}
