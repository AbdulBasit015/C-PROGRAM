#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients
    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    } 
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2f\n", root1);
    } 
    else {
        printf("Roots are imaginary (complex), cannot be determined with this version.\n");
    }

    return 0;
}
