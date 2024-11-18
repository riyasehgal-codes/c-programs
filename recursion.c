#include<stdio.h>
void printhw( int count);
int main(){
    int count;
    printf("Enter how many times would you like to print hello world");
    scanf("%d", &count);
    printhw(count);
    return 0;
    
}

void printhw( int count){
    if (count==0){
        return ;}
    printf("hello world\n");
    printhw(count-1);
}