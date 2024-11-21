#include<stdio.h>

int main(){
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    int remain,sum=0,newnum=0;

    while (num>0) {
        remain= num%10;
        newnum = newnum*10 + remain;
        sum+=remain;
        num/=10;
    } printf(" newnum= %d \n", newnum);
    printf("sum: %d \n",sum);
}