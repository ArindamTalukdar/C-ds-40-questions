// Program to find the GCD and LCM of two numbers

#include <stdio.h>
int main() {
    int a, b, x, y, gcd, lcm;
    // Taking two numbers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    a = x;
    b = y;
    // Finding GCD using Euclidean algorithm
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    // Calculating LCM using formula
    lcm = (x * y) / gcd;
    // Printing results
    printf("GCD = %d\n", gcd);
    printf("LCM = %d", lcm);
    return 0;
}

