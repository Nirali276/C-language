#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        sum = i;
        printf("%d\n", sum);
    }

    return 0;
}
