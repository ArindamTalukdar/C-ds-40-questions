// Program to count the number of digits in an integer

#include <stdio.h>
int main() {
    int num, count = 0;
    // Taking number as input
    printf("Enter a number: ");
    scanf("%d", &num);
    // Counting digits
    do {
        count++;
        num /= 10;
    } while(num != 0);
    // Printing result
    printf("Number of digits = %d", count);
    return 0;
}

