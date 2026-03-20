#include<stdio.h> 
int main(){
    int a,b,temp;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Before swapping: a=%d, b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a=%d, b=%d\n",a,b);
    printf ("Swapping done successfully.\n");
    printf (" Now swaping using second method without using third variable.\n");
    int c ,d;
    printf("Enter the value of c:");    
    scanf("%d",&c);
    printf("Enter the value of d:");
    scanf("%d",&d);
    printf("Before swapping: c=%d, d=%d\n",c,d);
    c=c+d;
    d=c-d;
    c=c-d;
    printf("After swapping: c=%d, d=%d\n",c,d); 
    printf ("Swapping done successfully.\n");
    printf (" Now swaping using third method without using third variable.\n");
    int e,f;
    printf("Enter the value of e:");
    scanf("%d",&e);
    printf("Enter the value of f:");
    scanf("%d",&f);
    printf("Before swapping: e=%d, f=%d\n",e,f);
    e =e*f;
    f=e/f;
    e=e/f;
    printf("After swapping: e=%d, f=%d\n",e,f);

    return 0;
}
