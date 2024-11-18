#include<stdio.h>

int main(){
    int num,i, sum=0;
    printf("Enter number to check");
    scanf("%d", &num);
    while (num!=0) {
        sum+= num%10;       // 181%10 = 1     18%10 = 8    1%10 = 1
        num/=10;            // 181/10 = 18      18/10= 1    1/10 = 0
    }
    printf("sum of digits= %d",sum);
    return 0;
}