// WAP in C to convert a temperature reading in degrees Fahrenheit to degrees Celsius, using formula: C = (5/9) * (F-32)


#include<stdio.h>

int main(){
    float f= 200;
    float c=(5.0/9.0)*(f-32.0);
    printf("Temprature in fahrenheit: %g \n",f);
    printf("Temprature in celsius: %g",c);
    return 0;
}