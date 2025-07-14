// Program to implement dynamic memory allocation using malloc() and free()

#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr, n, i;
    // Taking size as input
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Allocating memory using malloc
    ptr = (int *)malloc(n * sizeof(int));
    if(ptr == NULL) {
        printf("Memory allocation failed.");
        return 0;
    }
    // Taking array elements as input
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &ptr[i]);
    // Printing array elements
    printf("Array elements: ");
    for(i = 0; i < n; i++)
        printf("%d ", ptr[i]);
    // Freeing allocated memory
    free(ptr);
    return 0;
}

