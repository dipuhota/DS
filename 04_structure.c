//WAP using structure take 3 variabe find the greatest
#include<stdio.h>
struct var
{
  int a,b,c; 	
};
int main()
{
	struct var obj;
	printf("Enter the values\n");
	scanf("%d%d%d",&obj.a,&obj.b,&obj.c);
	if(obj.a > obj.b)
	{
		printf("The greatest number is a=%d",obj.a);
	}
	else if(obj.b > obj.c)
	{
		printf("The greatest number is b=%d",obj.b);
	}
	else
	{
		printf("The greatest number is c=%d",obj.c);
	}
	return 0;
}
