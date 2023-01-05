#include <stdio.h>
int main() {
    int n,first=0,second=1,next,c;
    scanf("%d",&n);
printf("%d%d",first,second);
    c=2; for(c=2;c<=n*n;c++)
    { 
        next=first+second;
        printf("%d",next);
        first=second; second=next; 
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

