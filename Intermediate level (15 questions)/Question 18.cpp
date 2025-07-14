// Program to print all prime numbers between 1 and 100

#include <stdio.h>
int main() {
    int i, j, isPrime;
    // Loop from 2 to 100
    for(i = 2; i <= 100; i++) {
        isPrime = 1;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        // If prime, print it
        if(isPrime)
            printf("%d ", i);
    }
    return 0;
}

