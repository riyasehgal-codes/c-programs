#include<stdio.h>
int main(){
    int num;
    int count=0;
    printf("Enter a number to check");
    scanf("%d", &num);
    for(int i=2; i<=num-1; i++){
        if (num%i==0) {
            count+=1;
        }
    }
    if(count==0){
        printf("Prime number");
    }else {
        printf("Not a prime number");
    }
}