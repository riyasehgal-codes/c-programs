#include<stdio.h>

int main(){
    int array[]= {1,2,3,4,5};
    int *ptr=array;
    for (int i=0; i<5;i++){
        printf("%d", *(ptr+i));
    } 
    printf("\nafter reversing\n");

    for (int i=1; i<5/2;i++){
        int first= array[i];
        int second = array[5-i-1];
        array[5-i-1]=first;
    }
    for (int i=0; i<5;i++){
        printf("%d", *(ptr+i));
    } 
    return 0;
}