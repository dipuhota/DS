/* AAAAA
    BBBB
     CCC
      DD
       E
       */
#include<stdio.h>
int main()
{
	int i;
	char j;
	int k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=i;k<=5;k++)
		{
			printf("%c",'A'-1+i);
		}
		printf("\n");
	}
	return 0;
}
