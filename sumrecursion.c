#include<stdio.h>
int sum(int n);

int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);
    printf("%d",sum(n));
}

int sum(int n){
    if (n==1)
    { return 1; 
        }
    int sumnm1= sum(n-1);
    int sumn=  n + sumnm1 ;
    return sumn;
}