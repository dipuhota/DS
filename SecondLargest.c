#include<stdio.h>
int secondLargest(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
			
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		}
	
	return arr[n-2];
	
}
}
int main()
{
	int arr[7]={10,29,36,35,28,37,39};
	int Second=secondLargest(arr,7);
	printf("The second largest number is %d",Second);
	
	return 0;
}
