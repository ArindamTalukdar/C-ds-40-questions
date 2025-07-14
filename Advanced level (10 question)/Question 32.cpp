// Program to use recursion to find the factorial of a number

#include <stdio.h>
long long factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int n;
    // Taking input
    printf("Enter a number: ");
    scanf("%d", &n);
    // Printing factorial using recursion
    printf("Factorial of %d = %lld", n, factorial(n));
    return 0;
}

