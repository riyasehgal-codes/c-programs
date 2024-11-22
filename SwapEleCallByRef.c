// program to swap elements by call by reference

#include<stdio.h> 
int swap( int *a , int *b) ;

int main(){
    int a=8, b=9;
    int *ptr= &a;
    int *pptr= &b;
    printf("Before swapping:\n value of a=%d \n value of b=%d \n",a,b);
    swap(ptr,pptr);
    printf("after swapping\n value of a= %d \n value of b=%d", a,b);
    

}
int swap( int *a , int *b) {
    int tr= *a;
    *a=*b;
    *b=tr;
    return *a, *b;

    // printf("after swapping\n value of a= %d \n value of b=%d", *a, *b);
}