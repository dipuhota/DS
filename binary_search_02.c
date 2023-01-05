#include<stdio.h>
int main()
{ int n,a[n],i,low=0,mid,found;
int high=n-1,key;
printf("Enter the size of the array:");
scanf("%d",&n);
printf(" Enter the elements of the array:\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a);
}
printf("Ener the key:");
scanf("%d",&key);
while(low<=high)
{ 
 mid=(low+high)/2;
  if(key==a[mid])
	{
		found=1;
		break;
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
