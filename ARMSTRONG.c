#include<stdio.h>
#include<math.h>

int main(){
    int num= 153;
    int realnum=num;
    int lst, rem, sum=0;
    while ( num!=0){
        int lst= num%10;
        num/=10;
        sum+= pow(lst,3);

    }
    if ( realnum==sum){
        printf("Armstrong number");
    } else {
        printf("Not a Armstrong number");
    }

}