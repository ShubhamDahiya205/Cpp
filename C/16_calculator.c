#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    // Taking user input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // Space before %c to avoid newline issues

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Performing the operation based on user input
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %f\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
