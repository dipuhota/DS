/*Find the first non-repeating element in a given array arr of N integers.
Note: Array consists of only positive and negative integers and not zero.
Example 1:
Input : arr[] = {-1, 2, -1, 3, 2}
Output : 3
Explanation:
-1 and 2 are repeating whereas 3 is
the only number occuring once.
Hence, the output is 3. */
#include<stdio.h>
int main()
{ 
int arr[5]={-1,2,-1,3,2},i,j;
for(i=0;i<5;i++)
 {
   for (j=0;j<5;j++)
   {
   
if (i!=j && arr[i]==arr[j])
 break;
  }
 if (j==5)
printf("%d ",arr[i]);
       
}
	return 0;
}
