#include<stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d", &num);

    for ( int i=1; i<=10;i++){
        printf("%d x %d = %d \n4", num, i, num*i);
    }
}