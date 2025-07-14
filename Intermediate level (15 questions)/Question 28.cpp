// Program to find the length of a string without using library functions

#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0;
    // Taking string as input
    printf("Enter a string: ");
    scanf("%s", str);
    // Finding string length manually
    for(i = 0; str[i] != '\0'; i++)
        length++;
    // Printing length
    printf("Length of string = %d", length);
    return 0;
}

