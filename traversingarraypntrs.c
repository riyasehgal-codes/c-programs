#include<stdio.h>

// takes elements in the array and print them along with their index

int main(){
    int aadhar[5];
    int *ptr = &aadhar[0];
    for ( int i=0; i<5; i++) {
        printf("enter element");
        scanf("%d", (ptr+i));
    }

    for (int i=0;i<5;i++) {
        printf("%d index = %d\n", i, *(ptr+i));

    }
    return 0;
}