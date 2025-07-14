// Program to use recursion to find the nth Fibonacci number

#include <stdio.h>
int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    // Taking input
    printf("Enter the position of Fibonacci number: ");
    scanf("%d", &n);
    // Printing nth Fibonacci number
    printf("Fibonacci number at position %d = %d", n, fibonacci(n));
    return 0;
}

