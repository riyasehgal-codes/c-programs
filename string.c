#include<stdio.h>

// to print a string ;

int main(){
    char name[]="riya";

    for (int i=0; name[i]!='\0';i++) {
    printf("%c", name[i]);
    }
    return 0;
}