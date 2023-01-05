#include<stdio.h>
int main()
{
  int S1,S2,S,i,n;
  printf("Enter the value of n");
  scanf("%d",&n);
  	for(i=0;i<=n;i++)
  	{
  	if(n%2==0)
	  {
	  	S1=S1+i;
		  }	
    else
	{
		S2=S2+i;
			  }		  
	  }
	  S=S1+S2;
	  printf("%d",S);
  return 0;	
}
