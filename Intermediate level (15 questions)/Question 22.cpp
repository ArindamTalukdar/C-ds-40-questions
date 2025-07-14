// Program to perform matrix multiplication

#include <stdio.h>
int main() {
    int a[10][10], b[10][10], product[10][10] = {0};
    int i, j, k, rows1, cols1, rows2, cols2;
    // Taking size of matrices as input
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    // Check matrix multiplication condition
    if(cols1 != rows2) {
        printf("Multiplication not possible.\n");
        return 0;
    }
    // Taking elements of first matrix
    printf("Enter first matrix:\n");
    for(i = 0; i < rows1; i++)
        for(j = 0; j < cols1; j++)
            scanf("%d", &a[i][j]);
    // Taking elements of second matrix
    printf("Enter second matrix:\n");
    for(i = 0; i < rows2; i++)
        for(j = 0; j < cols2; j++)
            scanf("%d", &b[i][j]);
    // Multiplying matrices
    for(i = 0; i < rows1; i++)
        for(j = 0; j < cols2; j++)
            for(k = 0; k < cols1; k++)
                product[i][j] += a[i][k] * b[k][j];
    // Printing result
    printf("Product of matrices:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }
    return 0;
}

