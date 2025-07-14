// Program to input two numbers and print their sum

#include <stdio.h>
int main() {
    int a, b, sum;
    // Taking two numbers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Calculating the sum
    sum = a + b;
    // Printing the sum
    printf("Sum = %d", sum);
    return 0;
}

