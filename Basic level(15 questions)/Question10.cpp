// Program to reverse a given number

#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;
    // Taking number as input
    printf("Enter a number: ");
    scanf("%d", &num);
    // Reversing the number
    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    // Printing reversed number
    printf("Reversed number = %d", reversed);
    return 0;
}

