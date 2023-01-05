#include<stdio.h>
int main()
{
	int a[2][3][3]={{{10,20,30},{40,50,60},{70,80,90}},{{1,2,3},{4,5,6},{7,8,9}}};
	int i,j,k,l;
	for(i=0;i<2;i++)
	{
     for(j=0;j<3;j++)
     {
     	for(k=0;k<3;k++)
     	{
     		 l=l+k;
		 }
		 if(l>1)
		 {
		 	return 1;
		 }
	 }
	}
	return 0;
	}
