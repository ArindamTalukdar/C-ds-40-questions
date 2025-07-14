// Program to swap two numbers using pointers

#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a, b;
    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Swapping using pointers
    swap(&a, &b);
    // Printing swapped values
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}

