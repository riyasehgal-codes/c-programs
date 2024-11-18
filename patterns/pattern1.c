/*
1
12
123
1234*/

#include<stdio.h>

int main(){
    int n=4;
    for ( int i=0; i<=n;i++) {
        for( int j=1; j<=i; j++) {
            printf("%d",j);

        } printf("\n");
    }
}