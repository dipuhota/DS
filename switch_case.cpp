#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	switch(num)
	{
	case 1:
		printf("Sun day");
	break;
	case 2:
		printf("Mon day");
	break;
	case 3:
		printf("Tues day");
	break;
	case 4:
		printf("Wednes day");
	break;
	case 5:
		printf("Thurs day");
	break;
	case 6:
		printf("Fri day");
	break;
	case 7:
		printf("Satur day");
	break;
	default:
		printf("Invalid choice");
	}
	return 0;
}
