#include <stdio.h>

int main() {
    int i, j, rows;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for (i = 1; i <= rows; i++) {
        // Inner loop for stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
