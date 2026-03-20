#include<stdio.h>
int main (){
    int n,fib0=0,fib1=1,next;
    printf ("Enter terms:");
    scanf ("%d",&n);
   if ( n>0) {
    printf("Fibonachi series is :%d  %d ",fib0,fib1);
    for (int i=2; i<n; i++){
        next = fib0+fib1;
        fib0 = fib1;
        fib1 = next;
        printf("%d ",next);
    }}
             return 0;
}