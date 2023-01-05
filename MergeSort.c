#include<stdio.h>
void mergeSort(int [],int,int);
void merge(int [],int,int,int);
void mergeSort(int arr[],int start,int end)
{
	if(start<end)
	{
	
	int mid=(start+end)/2;
	mergeSort(arr,start,mid);
	mergeSort(arr,mid+1,end);
	merge(arr,start,mid,end);
}
}
void merge(int arr[],int start,int mid,int end)
{
	int temp[10];
	int i,j,k;
	i=start;
	j=mid+1;
	k=0;
	while(i<=mid && j<=end)
	{
	if(arr[i]<arr[j])
	{
		temp[k]=arr[i];
		i++;
		k++;
		}
		else{
			temp[k]=arr[j];
			j++;
			k++;
		}	
	}
	
	//pending element
	
	while(i<=mid)
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=end)
	{
		temp[k]=arr[j];
		j++;
		k++;
	}
	//copy all the element of temp array and store in arr
	
	k=0;
	for(i=start;i<=end;i++)
	{
		arr[i]=temp[k++];
	}
}
int main()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,33},i;
	mergeSort(arr,0,9);
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
