#include<stdio.h>
int fact(int n);

int main(){
    int n= 5;
    printf("Factorial of n is %d", fact(n));
    return 0;
}

int fact(int n){
    if (n==1) {
        return 1;
    }
    int factnm1 = fact(n-1);
    int factn = factnm1*n;
    return factn;

}