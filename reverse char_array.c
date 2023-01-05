//input your name and reverse it
#include<stdio.h>
int main()
{
	char ch[8]="Chandan";
	int i=0,j=7;
    printf("After reverse of the array\n");
    while(i<j)
    {
    	int temp=ch[i];
    	ch[i]=ch[j];
    	ch[j]=temp;
    	i++;
    	j--;
	}
    for(i=0;i<8;i++)
    {
    	printf("%c",ch[i]);
	}
	
	
	return 0;
}
