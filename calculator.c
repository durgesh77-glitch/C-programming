#include<stdio.h>
int main ()
{int a,b;
    char op;
    printf ("Enter first no.:");
    scanf ("%d",&a);
    printf ("Choose the operator:\n*\t/\t+\t-\t<\t>\t%%\t&\t|\t^\n");
    printf ("Enter operator:\n");
    scanf (" %c",&op);
    printf ("Enter second no.:");
    scanf ("%d",&b);
    switch (op){
    case '+' :   printf ("Answer=%d",a+b);
    break;
    case '-' :   printf ("Answer=%d",a-b);
    break;
    case '*' :   printf ("Answer=%d",a*b);
    break;
    case '/' :   printf ("Answer=%d",a/b);
    break;
    case '%' :   printf ("Answer=%d",a%b);
    break;
    case '&' :   printf ("Answer=%d",a&b);
    break;
    case '|' :   printf ("Answer=%d",a|b);
    break;
    case '^' :   printf ("Answer=%d",a^b);
    break;
    case '<' :   printf ("Answer=%d",a<b);
    break;
    case '>' :   printf ("Answer=%d",a>b);
    break;
    }
    return 0;
}