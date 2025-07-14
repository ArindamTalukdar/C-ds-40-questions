// Program to find the factorial of a given number

#include <stdio.h>
int main() {
    int n, i;
    long long factorial = 1;
    // Taking number as input
    printf("Enter a number: ");
    scanf("%d", &n);
    // Calculating factorial
    for(i = 1; i <= n; i++) {
        factorial *= i;
    }
    // Printing factorial
    printf("Factorial of %d = %lld", n, factorial);
    return 0;
}

