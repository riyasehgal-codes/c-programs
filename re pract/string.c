#include <stdio.h>
int sum( int n);

int main(){
    int n=10;
    printf("%d", sum(n));
    return 0;

}

int sum( int n){
    if (n==0)
    return 0;

    int sumnm1 = sum(n-1);
    int sumn= sumnm1 + n ;
    return sumn;
}


// not >> arithmatic >> relational >> logical  