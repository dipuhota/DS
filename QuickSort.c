#include<stdio.h>
void quickSort(int [],int,int);
int partition(int [],int,int);

void quickSort(int arr[],int start,int end)
{
	if(start<end)
	{
		int PIndex=partition(arr,start,end);
		quickSort(arr,start,PIndex-1);
		quickSort(arr,PIndex+1,end);
	}	
}
int partition(int arr[],int start,int end)
{
	int pivot=arr[end];
	int PIndex=start;
	int i=start;
	int temp;
	for(i=start;i<end;i++){
		if(arr[i]<pivot){
         temp=arr[PIndex];
			arr[PIndex]=arr[i];
			arr[i]=temp;
			PIndex++;
		}
	}
		temp=arr[PIndex];
		arr[PIndex]=arr[end];
		arr[end]=temp;
		
		return PIndex;
}
int main()
{
   int arr[10]={12,11,34,55,23,110,89,999,888,10},i;
   printf("Before Sorting\n");
   for(i=0;i<10;i++)
   {
   	printf("%d ",arr[i]);
	   }
	   quickSort(arr,0,9);
	   
	printf("\nAfter Sorting\n");
   for(i=0;i<10;i++)
   {
   	printf("%d ",arr[i]);
	   }	
	return 0;
}
