// Program to copy one string to another string

#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i;
    // Taking first string as input
    printf("Enter a string: ");
    scanf("%s", str1);
    // Copying string
    for(i = 0; str1[i] != '\0'; i++)
        str2[i] = str1[i];
    str2[i] = '\0';
    // Printing copied string
    printf("Copied string: %s", str2);
    return 0;
}

