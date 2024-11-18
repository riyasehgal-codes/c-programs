#include<stdio.h>
int main(){
    int num, ren;
     printf("Enter a number:");
     scanf("%d", &num);
     int n = num;
     while (num!=0) {
        ren= ren*10 + num%10;
        num/=10;}
    
    printf("after reversing = %d", ren);
    if (ren==n){
        printf("\n palendrome");}
    else 
        printf("NOT palendrome"); 
    

}