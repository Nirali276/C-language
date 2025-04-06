#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    switch (a>b) {
        case 1:
            printf("Maximum number is: %d\n", a);
            break;
        case 0:
            if (b > a) {
                printf("Maximum number is: %d\n", b);
            } else {
                printf("Both numbers are equal.\n");
            }
            break;
    }
    return 0;
}
