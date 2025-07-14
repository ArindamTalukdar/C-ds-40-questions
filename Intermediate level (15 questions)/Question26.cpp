// Program to search an element in an array (linear search)

#include <stdio.h>
int main() {
    int arr[100], n, val, i, found = 0;
    // Taking array size and elements as input
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Taking element to search
    printf("Enter element to search: ");
    scanf("%d", &val);
    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == val) {
            found = 1;
            break;
        }
    }
    // Printing result
    if(found)
        printf("Element found at position %d", i + 1);
    else
        printf("Element not found");
    return 0;
}

