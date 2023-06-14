/*Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2*/
#include <stdio.h>

int main() {
    float operand1, operand2;
    char operator;
    float result;

    printf("Enter Number1: ");
    scanf("%f", &operand1);

    printf("Enter the Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%f", &operand2);

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            break;
    }

    return 0;
}
