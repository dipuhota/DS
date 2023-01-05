#include<stdio.h>
int main()
{ int sal[10]={5000,7000,25000,87000,6000,11500,12300,25009,39000,45000};
 float bonus,Totalsal;
 int i;

 for(i=0;i<10;i++)
 {
 	
 	if(sal[i]>5000)
 	{
 		bonus=0.03;
 		Totalsal=sal[i]+(sal[i]*bonus);
	 }
	 else if(sal[i]>=10000&&sal[i]<=5000)
	 {
	 	bonus=0.026;
	 	Totalsal=sal[i]+(sal[i]*bonus);
	 }
	 else if(sal[i]>=20000)
	 {
	 	bonus=0.02;
	 	Totalsal=sal[i]+(sal[i]*bonus);
	 }
 }
 printf("%f",Totalsal);
	return 0;
}
