#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Comparison logic
    if (num1 > num2)
        printf("%d is greater than %d\n", num1, num2);
    else if (num1 < num2)
        printf("%d is less than %d\n", num1, num2);
    else
        printf("%d is equal to %d\n", num1, num2);

    return 0;
}
