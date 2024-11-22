#include<stdio.h>
#include<string.h>

int main(){
    char str[100], rev[100];
    int i,j,len;

    printf("Enter your string:");
    scanf("%s", &str);
    
    len= strlen(str);

    for ( i=0, j=len-1 ; j>=0 ; i++, j-- ) {
        rev[i]= str[j];
    }
    rev[i] = '\0' ;
     if (strcmp( rev, str)==0 )
         printf("Palindrome");
    else 
        printf("Not Palindrome");
}