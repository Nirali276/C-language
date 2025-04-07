#include <stdio.h>

int factorial(int n);

int main() {
    int num, fact;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    fact = factorial(num);
    printf("Factorial of %d = %d\n", num, fact);

    return 0;
}

int factorial(int n) {
    int i, fact = 1;

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
} 

//OR

#include <stdio.h>

void factorial(); 

int main() {
    factorial(); 
    return 0;
}

void factorial() {
    int num, i, fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %d\n", num, fact);
}
