// Program to check whether a string is a palindrome

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, flag = 1;
    // Taking string as input
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    // Checking palindrome
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    // Printing result
    if(flag)
        printf("String is a palindrome");
    else
        printf("String is not a palindrome");
    return 0;
}

