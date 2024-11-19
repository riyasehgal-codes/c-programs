#include<stdio.h>
int fact(int n);   // function declaration 


int main(){
    float pi= 3.14;
    int n= 5;
    printf("Factorial of n is %d", fact(n));    // function calling 
    return 0;
}
 // function defination
int fact(int n){
    if (n==1) {
        return 1;
    }
    int factnm1 = fact(n-1);
    int factn = factnm1*n;
    return factn;

}