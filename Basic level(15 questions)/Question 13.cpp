// Program to find the Fibonacci series up to N terms

#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next, i;
    // Taking number of terms as input
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    // Printing Fibonacci series
    printf("Fibonacci series: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}

