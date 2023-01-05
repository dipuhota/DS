/*Find the first non-repeating element in a given array arr of N integers.
Input : arr[] = {1, 1, 1}
Output : 0*/
#include<stdio.h>
int main()
{ 
int arr[3]={1,1,1},i,j;
for(i=0;i<3;i++)
 {
   for (j=0;j<3;j++)
   {
   
if (i!=j&&arr[i]==arr[j])
 break;
  }
 if (j==3)
printf("%d",arr[i]);
       
}
	return 0;
}
