// Program to convert Celsius to Fahrenheit

#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    // Taking temperature in Celsius as input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    // Converting Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;
    // Printing temperature in Fahrenheit
    printf("Temperature in Fahrenheit = %.2f", fahrenheit);
    return 0;
}

