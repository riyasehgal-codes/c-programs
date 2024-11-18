#include<stdio.h>

// WAP in C to calculate the sum of the first n odd digit integers (i.e. 1+3+5+7+…..+(2n-1)).
// Test the program by calculating the sum of the first 100 odd integers 
//(Note: that the last integer will be 199.)

int main(){
    int n=100;
    int sum;
    for(int i=1; i<n; i++){
        if (i%2!=0){
            // printf("%d \n", i);
            sum+=i;
        }
    } printf("sum of the first %d odd numbers is %d", n, sum);
}

