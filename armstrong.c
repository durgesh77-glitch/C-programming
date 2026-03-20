#include <stdio.h>
#include<math.h>
int main (){
    int n,sum=0,digit=0,digicount=0;
    int temp;
    printf ("Enter no.:");
    scanf ("%d",&n);
    temp =n ;
    while (temp>0){
    temp =temp/10;
    digicount=digicount +1;
    }
     temp=n;
     while (temp>0){
    digit=temp%10;
    sum += pow (digit,digicount);
    temp= temp/10;
     }
     printf ("Sum is %d\n",sum);
    if (n==sum){
     printf ("Entered no. is Armstrong no.");
    }
    else {
    printf ("NOT A ARMSTRONG NO.");
    }
    return 0;
}