#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);
    printf("Enter third number");
    scanf("%d", &c);

    int large= (a>b)? ((a>c)?a:c) : b ;
    printf("%d", large);
}