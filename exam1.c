#include <stdio.h>
int main()
{
int a[5]={111,222,333};
int i,x;
for(i=0;i<3;i++)
if(x=(a[i]=='111'||a[i]==111))
{
	printf("hi\n");
	
}
else
{
	printf("hello\n");
	
}
	return 0;
}
