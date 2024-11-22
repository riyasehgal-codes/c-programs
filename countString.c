#include<stdio.h>

int main(){
    char str[100];
    printf("Enter a string:");
    gets(str);
    int count;
    
    for ( int i=0;  str[i]!= '\0'; i++) {
        if (str[i]==' ') {
            continue;
        } else  
            count++;
    }
    printf("Total length of the string is: %d", count);
    return 0;
}