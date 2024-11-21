#include <stdio.h> 

void main() {
    char c;
    printf("Enter a character:");
    scanf("%c", &c);

    if ( c>='A' && c<='Z')
        printf("IT IS UPPERCASE");
    else if (c>='a' && c<='z') 
        printf("it is lowercase");
    else if (c>='0' && c<='9')
        printf("It is a number");
    else 
        printf("It is a special character");
}