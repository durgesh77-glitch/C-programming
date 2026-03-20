#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b) {
        if(a > c)
            printf("Largest number = %d", a);
        else
            printf("Largest number = %d", c);
    }
    else {
        if(b > c)
            printf("Largest number = %d", b);
        else
            printf("Largest number = %d", c);
    }

    return 0;
}
