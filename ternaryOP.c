#include<stdio.h>

// print the largest number out of three using ternary operator

int main(){
    int a=100, b=79, c=78;
    int result= (a>b)? ((a>c)? a:c):b ;
    printf("%d", result);
    return 0;
}