#include<stdio.h>
 int ctln1(int n) {
   
   if (n<=1)
    return 1;

   int res = 0,i;
   for (i=0; i<n; i++)
      res=res+ctln1(i)*ctln1(n-i-1);
   return res;
}

int main() {
   int n = 4;
   int result=ctln1(n);
   printf("T(4)=%d\n",result);
   return 0;
}
