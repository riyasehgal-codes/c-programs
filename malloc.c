#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr = (int*)malloc(5,sizeof(int));
    if (ptr==NULL)
        printf("Memory allocation failed");
    else{
        printf("Memory allocation success\n");
        for ( int i=0; i<5; i++){
            ptr[i]=i+1; 
            printf("%d\n", ptr[i]);
        }
    }
}