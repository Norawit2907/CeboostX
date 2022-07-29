#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1, j = 1; i <= n; j++){
        if(i == 1 || j == n || i == j){
            printf("*");
        }
        else{
            printf(" ");
        }
        if(j == n){
            j = 0;
            i++;
            printf("\n");
        }
       
    }
}