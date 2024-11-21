#include<stdio.h>

int main(){
    int year;
    printf("Enter a year");
    scanf("%d",&year);

    if (year%4==0)
        printf("IT IS A LEAP YEAR");
    else
        printf("IT IS NOT A LEAP YEAR");
}