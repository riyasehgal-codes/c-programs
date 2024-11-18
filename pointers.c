#include<stdio.h>
void main(){
    int age = 20;
    int *p = &age;
    int agee = *p; 

    printf("age = %d \n",age); // 20
    printf("address of age in the pointer: %u \n", p); // add of 20
    printf("value at the given pointer: %d \n", agee);  // 20
    printf("%d",*p); //20
    printf("%u", &age); // add of 20

    // %u --> unsigned integers
    // %p --> hexadecimal address
    // iski maiya ki jai hove 
}
