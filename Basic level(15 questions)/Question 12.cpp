// Program to find the sum of digits of a number

#include <stdio.h>
int main() {
    int num, sum = 0, digit;
    // Taking number as input
    printf("Enter a number: ");
    scanf("%d", &num);
    // Calculating sum of digits
    while(num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    // Printing sum of digits
    printf("Sum of digits = %d", sum);
    return 0;
}

