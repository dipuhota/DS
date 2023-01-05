// CBA---> ABC
#include<stdio.h>
int main()
{
	char ch[4]="CBA";
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3-i;j++)
		{
			if(ch[j]>ch[j+1])
			{
				int temp=ch[j];
				ch[j]=ch[j+1];
				ch[j+1]=temp;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%c",ch[i]);
	}
	return 0;
}
