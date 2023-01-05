#iclude<stdio.h>
int main()
{
float sal,bon,gen,totalsal,extbons;
printf("Enter the employee salary:\n");
scanf("%d",& sal);
printf("Enter the employee gender:\n");
sacnf("%d",&gen);
if(gen==0)
{
	bon=0.09;
	if (sal<=20000)
	{
		extbons=0.05;
		totalsal=sal+(sal*(bon+extbon));
	}
}
else if(gen==1)
{
	bon=0.17;
	if(sal<=20000)
	{
		extbons=0.05;
	}
}
	
	
	return 0;
}
