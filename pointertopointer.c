#include<stdio.h>
void main(){
    int age=20;
    int *ptr= &age;
    int **pptr = &ptr;

    printf("%d\n", *ptr); // value of age
    printf("%u\n", ptr); // address of age
    printf("%d\n", **pptr); //value of age

}