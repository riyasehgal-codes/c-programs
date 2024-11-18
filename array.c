#include<stdio.h>

// creates and reads  an array

int main(){
    int n;
    
    printf("enter n");
    scanf("%d", &n);

    int marks[n];
    int *ptr= &marks[0];
    for(int i=0;i<n;i++) {
        printf("enter value at index %d=", i);
        scanf("%d", &marks[i]);
    }
    for(int i=0; i<n;i++){
        
        printf("value at %d index = %d \n", i, *(ptr+i));

    }
    return 0;
}

