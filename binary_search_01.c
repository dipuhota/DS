#include<stdio.h>
int main()
{ int a[11]={10,20,30,35,40,69,76,85,89,99,100};
int low=0,high=10,key=85,mid,found=0;
while(low<=high)
{ mid=(low+high)/2;

	if(key==a[mid])
	{
		found=1;
	}
	else if(key>a[mid])
	{
		low=mid+1;
	
	}
	else if(key<a[mid])
	{
		high=mid-1;
		
	}
	
}
if(found==1)
{
	printf("Success");
	
}
else
{
	printf("Failure");
}
	return 0;
}
