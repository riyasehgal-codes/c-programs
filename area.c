#include<stdio.h>

int area( int l, int b);
int perimeter(int l, int b);

int main(){
    int l,b;
    printf("Enter length of the rectange:");
    scanf("%d", &l);
    printf("\nenter breadth of the rectangle:");
    scanf("%d", &b);

    printf("\n");
    int a = area(l,b);
    int p= perimeter(l,b);
    printf("area of rectangle is %d \n", a);
    printf("\nPerimeter of the rectangle is %d \n\n", p);
    return 0;

}

int area( int l, int b){
    int areaa = l*b ;
    return areaa;
}

int perimeter( int l, int b){
    int perim = 2*(l+b);
    return perim; 
}