#include<stdio.h>
int main()
{
int arr[10];	
  int i,max=arr[0],min=arr[0];
//  printf("Enter 10 numbers:\n");
  for(i=0;i<10;i++)
  {
  	printf("Enter %d number\n",i+1);
  	scanf("%d",&arr[i]);
  }
//  //to find largest number
//  for(i=0;i<10;i++)
//  {
//  	if(arr[i]>max)
//  	{
//  	  max=arr[i];
//	  }
//  }
    //to find smallest number
  for(i=0;i<10;i++)
  {
  	if(arr[i]<min)
  	{
  	  min=arr[i];
	  }
  }
  printf("The largest element is %d\n",max);
  printf("The smallest element is %d\n",min);
  
  

	return 0;
}
