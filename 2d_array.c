#include<stdio.h>
int main()
{int a[4][4]={{67,68,76,65},{77,86,75,69},{88,87,90,83},{77,92,93,59}},i,j;
 int max =a[0][0];
printf("Students Physics Marks:\n");
for(i=0;i<1;i++)
{
	for(j=0;j<4;j++)
	{   
	 printf("%d \n",a[i][j]);
	
	}
}

printf("Students Chemistry Marks:\n");
for(i=1;i<2;i++)
{
	for(j=0;j<4;j++)
	{
		printf("%d \n",a[i][j]);
	}
}
printf("Students Mathematics Marks:\n");
for(i=2;i<3;i++)
{
	for(j=0;j<4;j++)
	{
		printf("%d \n",a[i][j]);
	}
}
printf("Students IT Marks:\n");
for(i=3;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		printf("%d \n",a[i][j]);
	}
}
printf("The highest mark in  Physics is:");
for(i=0;i<1;i++)
{
	for(j=0;j<4;j++)
	{ 
		if(a[i][j]>max)
		{
			max=a[i][j];
		}
}
}
printf("%d  \n",max);
printf("The highest mark in  Chemistry is:");
for(i=1;i<2;i++)
{
	for(j=0;j<4;j++)
	{ 
		if(a[i][j]>max)
		{
			max=a[i][j];
		}
}
}
printf("%d \n",max);
printf("The highest mark in Mathematics is:");
for(i=2;i<3;i++)
{
	for(j=0;j<4;j++)
	{ 
		if(a[i][j]>max)
		{
			max=a[i][j];
		}
}
}
printf("%d \n",max);
printf("The highest mark in  IT is:");
for(i=3;i<4;i++)
{
	for(j=0;j<4;j++)
	{ 
		if(a[i][j]>max)
		{
			max=a[i][j];
		}
}
}
printf("%d \n",max);

	return 0;
}
