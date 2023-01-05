//Wap to print all unique elements in array
/*Input : 1, 2, 55, 5, 1, 5, 22, 2, 102
Output: 55, 22, 102
*/
#include<stdio.h>
int main()
{
	int a[]={1,2,55,5,1,5,22,2,102},i,j;
	printf("These are the unique elements:\n");
	for(i=0;i<9;i++)
	{
		int found=0;
		for(j=0;j<9;j++)
		{
		if(a[i]==a[j])
		{
			found++;
		}
	}
			if (found==1)
			printf("%d ",a[i]);
		}
		

	return 0;
}
