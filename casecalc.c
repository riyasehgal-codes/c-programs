#include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>

// simple calculator

int main()
{
    // char op;
    float num1, num2, result;
    char op;

    printf("Enter first number");
    scanf("%g", &num1);
    printf("Enter second number:");
    scanf("%g", &num2);
    printf("Enter the sign for the operation you would like to perform:");
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%g + %g = %g", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%g - %g = %g", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%g * %g = %g", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("%g / %g = %g", num1, num2, result);
        break;
    default:
        printf("\nWrong input");
    }
}