// Program to delete an element from an array

#include <stdio.h>
int main() {
    int arr[100], n, pos, i;
    // Taking array size and elements as input
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Taking position for deletion
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    // Shifting elements to delete the value
    for(i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    // Printing new array
    printf("Array after deletion: ");
    for(i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);
    return 0;
}

