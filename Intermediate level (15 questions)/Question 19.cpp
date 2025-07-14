// Program to find the largest element in an array

#include <stdio.h>
int main() {
    int n, i, max;
    int arr[100];
    // Taking array size and elements as input
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Finding the largest element
    max = arr[0];
    for(i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];
    // Printing result
    printf("Largest element = %d", max);
    return 0;
}

