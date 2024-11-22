#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter your string:");
    gets(str);

    char con[100];
    // char str2[100];
    // str2= str;
    printf ("Enter a string to concatenate:");
    gets(con);

// length of the string 

    int count;
    
        for ( int i=0;  str[i]!= '\0'; i++) {
            if (str[i]==' ') {
                continue;
            } else  
                count++;
        }
        printf("Total length of the string is: %d \n", count);


    // reverse a string
    char rev[100];
    int i,j;
    for ( i=0,j=count-1; j>=0; i++, j--) {
        rev[i]= str[j];
    }
    printf("reversed string : %s \n", rev);

    // concatenate strings 

    

    for ( i= count, j=0; j<=count; i++, j++) {
        str[i]= con[j];
    }

    printf("after concatenation: %s", str);

}