// Program to merge two files into a third file

#include <stdio.h>
int main() {
    FILE *f1, *f2, *f3;
    char ch;
    // Opening files
    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");
    f3 = fopen("merged.txt", "w");
    // Copying from file1
    while((ch = fgetc(f1)) != EOF)
        fputc(ch, f3);
    fclose(f1);
    // Copying from file2
    while((ch = fgetc(f2)) != EOF)
        fputc(ch, f3);
    fclose(f2);
    fclose(f3);
    printf("Files merged successfully into 'merged.txt'");
    return 0;
}

