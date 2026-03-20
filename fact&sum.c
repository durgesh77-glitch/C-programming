#include<stdio.h>
int main (){
    long long int n,s=1;
    printf ("Enter no.");
    scanf ("%lld",&n);
   if ( n>0) {
    for (int i=1; i<=n; i++){
        s = s*i;
    }
     printf ("Factorial is :%lld",s);}
    else if ( n==0){
        printf("Factorial is 1");
    }
   
   
    return 0;
}