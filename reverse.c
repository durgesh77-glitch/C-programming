#include<stdio.h>
int main(){
    int n,rev=0,digit=0;
    printf ("Enter a no.:");
    scanf ("%d",&n);
    while (n>0){
digit=0;
digit=n%10;
 n=n/10;
rev=(rev*10)+digit;
    }
    printf ("Reverse of above no.:%d",rev);
    return 0;
}