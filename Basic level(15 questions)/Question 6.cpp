// Program to check whether a number is even or odd

#include <stdio.h>
int main() {
    int num;
    // Taking a number as input
    printf("Enter a number: ");
    scanf("%d", &num);
    // Checking whether the number is even or odd
    if (num % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");
    return 0;
}

