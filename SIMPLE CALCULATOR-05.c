#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    // Display menu
    printf("Select an operator: +  -  *  / : ");
    scanf(" %c", &operator); // Notice the space before %c

    // Input two operands
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform calculation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            printf("Result = %.2f\n", result);
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
