//WAP  to search an element using binary search inside an array
#include<stdio.h>
int main()
{
int a[10]={10,28,48,57,46,34,57,49,33,22};
int low=0,high=9,mid,key=28,found=0;
while(low<=high)
{
 mid=(low+high)/2;
 
 if(key==a[mid])
 {
 	found++;
 	break;
	 }
	 else if(key<a[mid])
	 {
	 	high=mid-1;
		 }
	else if(key>a[mid])
	 {
	 	low=mid+1;
		 }
		 
		 if(found==1)
{
	printf("Success");
}
else{
	printf("Failure");
}
		 	
}


return 0;	
}
