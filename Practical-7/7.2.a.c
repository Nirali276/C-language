#include <stdio.h>
#define PI 3.14159

// Function prototype
void areaOfCircle();

int main() {
    areaOfCircle(); 
    return 0;
}

// Function definition
void areaOfCircle() {
    float r, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = PI * r* r;
    printf("Area of the circle: %.2f\n", area);
}
