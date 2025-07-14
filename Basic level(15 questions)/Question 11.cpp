// Program to check whether a number is prime or not

#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    // Taking number as input
    printf("Enter a number: ");
    scanf("%d", &num);
    // Checking for prime
    if (num <= 1)
        isPrime = 0;
    for(i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    // Printing result
    if (isPrime)
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number", num);
    return 0;
}

