// Program to insert an element in an array

#include <stdio.h>
int main() {
    int arr[100], n, pos, val, i;
    // Taking array size and elements as input
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Taking position and value for insertion
    printf("Enter position and value to insert: ");
    scanf("%d %d", &pos, &val);
    // Shifting elements to insert new value
    for(i = n; i >= pos; i--)
        arr[i] = arr[i-1];
    arr[pos-1] = val;
    // Printing new array
    printf("Array after insertion: ");
    for(i = 0; i <= n; i++)
        printf("%d ", arr[i]);
    return 0;
}

