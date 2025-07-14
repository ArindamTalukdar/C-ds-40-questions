// Program to demonstrate pointer arithmetic

#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int i;
    // Printing array elements using pointer arithmetic
    for(i = 0; i < 5; i++) {
        printf("Value at arr[%d] = %d\n", i, *(ptr + i));
    }
    return 0;
}

