/*Input:
A[] = {90, 80, 70, 60, 40, 20, 10, 30}
Output:
30 90 80 70 60 40 20 10 */
#include<stdio.h>
int main()
{
    int	a[8]= {90, 80, 70, 60, 40, 20, 10, 30},b[8],i;
	for(i=1;i<8;i++)
	{
		b[i]=a[i-1];

	}
	for(i=0;i<1;i++)
	{
	b[i]=a[i+7];
}
for(i=0;i<8;i++)
{
printf("%d ",b[i]);
}

	
	return 0;
}

