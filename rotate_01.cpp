//Rotate the array by one position in clock-wise direction.
/*Input:
Input:
A[] = {10,20,30,40,50}
Output:
50 10 20 30 40
*/
#include<stdio.h>
int main()
{ int a[5]={10,20,30,40,50},i;
 for(i=4;i>=0;i--)
 {
 	printf("%d ",a[i]);
 }
	return 0;
}
