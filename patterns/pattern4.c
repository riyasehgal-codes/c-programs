/* 
1
23
456
78910
*/
#include<stdio.h>

int main(){
    int n=5;
    int k=1;
        for (int i= 1; i<=n;i++){
        
            for (int j=1; j<=i;j++){
                printf("%d ",k);
            k++;
                
        } printf("\n"); 
        // k++;
    }
    return 0;
}