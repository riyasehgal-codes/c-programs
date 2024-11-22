#include<stdio.h>
 int main(){
    int arr[50];
    int *ptr = &arr[0];
    int len;
    printf("enter number of elements:");
    scanf("%d", &len);
    int sum=0;
    for ( int i=0; i<len; i++){
        printf("enter element %d :", i+1);
        scanf("%d",(ptr+i));
        sum+=arr[i];
    }
    printf("Sum of all elements: %d", sum);    
 }