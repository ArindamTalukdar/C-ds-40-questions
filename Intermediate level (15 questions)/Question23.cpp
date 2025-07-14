// Program to find the transpose of a matrix

#include <stdio.h>
int main() {
    int a[10][10], transpose[10][10];
    int i, j, rows, cols;
    // Taking matrix size and elements as input
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
    // Calculating transpose
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            transpose[j][i] = a[i][j];
    // Printing transpose
    printf("Transpose of the matrix:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}

