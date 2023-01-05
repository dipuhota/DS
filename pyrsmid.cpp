#include <stdio.h>
int main() {
   int i,s,k = 0;
   for (i = 1; i<=5;++i) {
      for (s=1;s<=5-i;++s) {
         printf("  ");
      }
      while (k!=2*i-1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}
