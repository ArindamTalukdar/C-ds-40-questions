// Program to find the largest of two numbers

#include <stdio.h>
int main() {
    int a, b;
    // Taking two numbers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Checking which number is largest
    if (a > b)
        printf("%d is largest", a);
    else
        printf("%d is largest", b);
    return 0;
}

