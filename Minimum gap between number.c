// Find out the minimum gap between the number
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[8]={100,999,223,339,786,694,96,297};
	int i=0,G;
	
	while(i<7)
	{
		if(a[i+1]>a[i])
		{
			G=a[i+1]-a[i];
			printf("%d ",G);
		}
	 else{
	 	G=a[i]-a[i+1];
	 	printf("%d ",G);
	 }	
		
	i++;
	}
	
	return 0;
}
