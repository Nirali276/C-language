#include <stdio.h>
#define PI 3.14159

float areaOfCircle();

int main() {
    float area;
    area = areaOfCircle();
    printf("Area of the circle: %.2f\n", area);
    return 0;
}

float areaOfCircle() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    return PI * r * r;
}
