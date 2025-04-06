#include <stdio.h>
#define PI 3.14159

void areaOfCircle(float radius);

int main() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    areaOfCircle(r); 
    return 0;
}

void areaOfCircle(float r) {
    float area = PI * r * r;
    printf("Area of the circle: %.2f\n", area);
}
