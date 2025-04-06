#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("Maximum number is: %d\n", a) :
    (b > a) ? printf("Maximum number is: %d\n", b) :
              printf("Both numbers are equal.\n");

    return 0;
}
