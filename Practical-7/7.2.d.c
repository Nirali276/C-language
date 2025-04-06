#include <stdio.h>
#define PI 3.14159


float areaOfCircle(float r);

int main() {
    float r, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = areaOfCircle(r); 
    printf("Area of the circle: %.2f\n", area);
    return 0;
}

float areaOfCircle(float r) {
    return PI * r * r; 
}
