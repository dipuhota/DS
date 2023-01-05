//WAP take input from the user (Real,Imaginary)
#include<stdio.h>
struct student
	{
	int real;
	int imaginary;	
	};
int main()
{
	struct student obj;
	printf("Enter Real number:");
	scanf("%d",&obj.real);
	printf("Enter Imaginary number:");
	scanf("%d",&obj.imaginary);
	
	
return 0;	
}
