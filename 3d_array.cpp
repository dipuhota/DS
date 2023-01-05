#include<stdio.h>
int main()
{
	int a[3][3]={{11,12,13},{14,15,16},{17,18,19}},b[3][3]={{88,89,90},{91,92,93},{94,95,96}},c[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d  ",c[i][j]);
	}
	printf("\n");
	
}
return 0;
}
