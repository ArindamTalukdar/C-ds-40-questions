// Program to swap two numbers using a temporary variable

#include <stdio.h>
int main() {
    int a, b, temp;
    // Taking two numbers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Swapping using temporary variable
    temp = a;
    a = b;
    b = temp;
    // Printing after swapping
    printf("After swap: a = %d, b = %d", a, b);
    return 0;
}

