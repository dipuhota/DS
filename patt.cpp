#include<stdio.h> 
int i=1,j=1;  
int main () 
{ 
  	if(i<=4) 
	{ 
		 
		if(j<=i) 
		{ 
			printf("*"); 
			j++; 
		//	goto one; 
		} 
		j=1; 
		printf("\n"); 
		i++; 
		main(); 
	} 
} 
