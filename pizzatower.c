#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i ;j++){
            for(int p = 0; p <= i-2; p++){
                printf(" ");
            }
            for(int k = 1; k <= n; k++){
                printf("#");
            }
            printf("\n");
        }
        
    }
}