#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse logic
    while (num != 0) {
        remainder = num % 10;              // Get last digit
        reversed = reversed * 10 + remainder; // Append digit
        num = num / 10;                    // Remove last digit
    }

    // Output reversed number
    printf("Reversed number = %d\n", reversed);

    return 0;
}
