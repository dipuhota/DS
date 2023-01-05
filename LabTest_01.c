//WAP a program to find the largest number among 10 numbers
#include<stdio.h>
int main()
{
	int a[10]={46,38,47,68,97,46,33,66,44,20};
	int i,max=a[0];
	for(i=0;i<10;i++)
	{
	 if(a[i]>max)
	 {
	 	max=a[i];
		 }	
	}
	printf("The largest number is: %d",max);
	
	return 0;
}
