#include <stdio.h>
int main(){
    int arr[]= { 1,2,3,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index;

    printf("Enter index :");
    scanf("%d", &index);

    printf("original array:");
    for ( int i=0; i<size; i++){
        printf("%d", arr[i]);
    }
    
    for( int i=index; i<size;i++){
        arr[i]=arr[i+1];
    } printf("\nNew Array: ");
    for ( int i=0; i<size; i++){
        printf("%d", arr[i]);
    }
}