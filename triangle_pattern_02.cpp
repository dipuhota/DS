/*12
  11 11 
  10 10 10 
  9  90  9  9
*/
#include<stdio.h>
int main()
{ int a,i;
	for(a=12;a>=9;a--)
	{
		for( i=1;i<=13-a;i++)
		{
	printf("    %d ",a);			
		
	}
		printf("\n");
	}
	return 0;
}
