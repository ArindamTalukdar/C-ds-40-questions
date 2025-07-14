// Program to calculate area of circle given radius

#include <stdio.h>
#define PI 3.1416
int main() {
    float radius, area;
    // Taking radius as input
    printf("Enter radius: ");
    scanf("%f", &radius);
    // Calculating area of circle
    area = PI * radius * radius;
    // Printing the area
    printf("Area = %.2f", area);
    return 0;
}

