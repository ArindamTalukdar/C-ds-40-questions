// Program to implement a simple calculator using switch-case

#include <stdio.h>
int main() {
    char op;
    float num1, num2;
    // Taking operator and operands as input
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    // Using switch-case for operations
    switch(op) {
        case '+':
            printf("Result = %.2f", num1 + num2);
            break;
        case '-':
            printf("Result = %.2f", num1 - num2);
            break;
        case '*':
            printf("Result = %.2f", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Division by zero is not allowed.");
            break;
        default:
            printf("Invalid operator.");
    }
    return 0;
}

