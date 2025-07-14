// Program to sort an array in ascending order

#include <stdio.h>
int main() {
    int n, i, j, temp;
    int arr[100];
    // Taking array size and elements as input
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Sorting array using bubble sort
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - i - 1; j++)
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    // Printing sorted array
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

