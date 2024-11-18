#include<stdio.h>
int sum(int a, int b);

int main(){
    int a,b;
    printf("Enter values for a");
    scanf("%d%d",&a,&b);
    // printf("entere a value of b");
    // scanf("%d",&b);
    // int s= sum(a,b);
    printf("sum of a and b is %d", sum(a,b));   
    return 0;
}

int sum(int a, int b) {
    return a+b;
}