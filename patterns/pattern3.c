/*
   1
  123
 12345
1234567
*/

#include<stdio.h>
 int main(){
    int k=5;
    for ( int i=1; i<=4; i++) {
        for (int j=1; j<=k;j++) {
            printf(" ");
            k-=1;
        } for( int j=1; j<=2*i-1;j++){
            printf("%d", j);
        } printf("\n");
    } return 0;
 }