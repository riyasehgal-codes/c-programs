#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

            // Ask the user to enter the values of a, b, and c

    // printf("Enter the coefficients a, b, and c: ");
    // scanf("%f %f %f", &a, &b, &c);
    a=3.0; b=2.0; c=6.0;

            // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check if the roots are real or complex
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct: %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        // Two real and equal roots
        root1 = -b / (2 * a);
        printf("The roots are real and equal: %.2f and %.2f\n", root1, root1);
    }
    else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
