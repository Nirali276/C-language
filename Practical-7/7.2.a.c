#include <stdio.h>
#define PI 3.14159

void areaOfCircle();

int main() {
    areaOfCircle(); 
    return 0;
}
void areaOfCircle() {
    float r, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = PI * r* r;
    printf("Area of the circle: %.2f\n", area);
}
