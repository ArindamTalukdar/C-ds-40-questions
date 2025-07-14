// Program to read and write data to a file

#include <stdio.h>
int main() {
    FILE *fptr;
    char str[100];
    // Writing to file
    fptr = fopen("file.txt", "w");
    printf("Enter text to write to file: ");
    fgets(str, sizeof(str), stdin);
    fprintf(fptr, "%s", str);
    fclose(fptr);
    // Reading from file
    fptr = fopen("file.txt", "r");
    printf("\nReading from file:\n");
    while(fgets(str, sizeof(str), fptr))
        printf("%s", str);
    fclose(fptr);
    return 0;
}

