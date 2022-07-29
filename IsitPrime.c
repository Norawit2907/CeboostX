#include<stdio.h>

int main(){
    int n, c = 0;
    scanf("%d", &n);
    if(n <= 0){
        printf("%d is NOT PRIME", n);
        return 0 ;
    }
    else{
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            c++;
            break;
        }
        
    
    }
    if(n == 1){
        printf("%d is NOT PRIME", n);
    }
    else if(c != 0){
        printf("%d is NOT PRIME", n);
    }
    else if(c == 0){
        printf("%d is PRIME", n);
    }
    }
    return 0;

}