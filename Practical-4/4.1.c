#include <stdio.h>
#include <math.h>  

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter values of a, b, and c: ");
    scanf("%f", &a);
       printf("Enter values of a, b, and c: ");
    scanf("%f",&b);
       printf("Enter values of a, b, and c: ");
    scanf("%f",&c);

    discriminant = b * b - 4 * a * c;
  
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
