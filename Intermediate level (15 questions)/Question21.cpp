// Program to perform matrix addition

#include <stdio.h>
int main() {
    int a[10][10], b[10][10], sum[10][10];
    int i, j, rows, cols;
    // Taking matrix size as input
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    // Taking first matrix as input
    printf("Enter first matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
    // Taking second matrix as input
    printf("Enter second matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);
    // Adding matrices
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            sum[i][j] = a[i][j] + b[i][j];
    // Printing result
    printf("Sum of matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}

