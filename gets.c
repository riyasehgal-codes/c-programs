#include<stdio.h>
#include<stdlib.h>
// to print a string and write it  ;

int main(){

    char name[1000];
    printf("enter your string:");
    gets(name);

    for (int i=0; name[i]!='\0';i++) {
    printf("%c", name[i]);
    }
    return 0;
}