#include<stdio.h>
int main()
{
	float salary,bonus,totalsalary,extbonus;int gen;
	//Male =0 , Female = 1
	printf("Enter your Salary : ");
	scanf("%f",&salary);
	printf("Enter you gender (0 for Male & 1 for Female) : ");
	scanf("%d",&gen);
	if(gen==0)
	{
		bonus = 0.09;
		if(salary<=20000)
		{
			extbonus = 0.05;
			totalsalary = salary+(salary*(bonus+extbonus));
		}
		else if( salary>20000 && salary<=50000)
		{
			extbonus = 0.025;
			totalsalary = salary+(salary*(bonus+extbonus));
		}
		else
		{
			extbonus = 0;
			totalsalary = salary+(salary*(bonus+extbonus));
		}
	}
	else if(gen==1)
	{
		bonus = 0.17;
		if(salary<=20000)
		{
			extbonus = 0.05;
			totalsalary = salary+(salary*(bonus+extbonus));
		}
		else if( salary>20000 && salary<=50000)
		{
			extbonus = 0.025;
			totalsalary = salary+(salary*(bonus+extbonus));
		}
		else
		{
			extbonus = 0;
			totalsalary = salary+(salary*(bonus+extbonus));
		}
	}
	//Display
	printf("Your salary amount was %f\n",salary);
	printf("Your Bonus amount is %f\n",(salary*bonus));
	if(salary<=50000)
	printf("Your extra bonus is %f\n",(salary*extbonus));
	printf("\nYour Total salary amount is %f",totalsalary);
	return 0;
}
