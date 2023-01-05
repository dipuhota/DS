#include<stdio.h>
int main()
{
	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}},i,j,b[4][1],c[4][1],d[1][4];
	int e[1][4];
	for(i=0;i<1;i++)
	{
		for(j=0;j<4;j++)
		{
			b[j][i]=a[i][j];
			
		}
	}
	for(i=0;i<1;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d \n",b[j][i]);
	
}
}
printf("------------------------------\n");
for(i=2;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			c[j][i]=a[i][j];
}
}

for(i=2;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("%d\n",c[i][j]);
}
}
printf("------------------------------\n");
for(i=1;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			d[i][j]=a[i][j];
}
}

for(i=1;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("%d ",d[i][j]);
}
}
printf("\n------------------------------\n");
for(i=3;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			e[i][j]=a[i][j];
}
}

for(i=3;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("%d ",e[i][j]);
}
}
	return 0;
}
