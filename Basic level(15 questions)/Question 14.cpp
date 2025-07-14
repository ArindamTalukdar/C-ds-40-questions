// Program to check whether a character is a vowel or consonant

#include <stdio.h>
int main() {
    char ch;
    // Taking a character as input
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    // Checking for vowel or consonant
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("%c is a vowel", ch);
    else
        printf("%c is a consonant", ch);
    return 0;
}

