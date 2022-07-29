#include<stdio.h>

int num[10000];
int ans[10000];

int main(){
    int n, c = 0, a = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        
    }
    for(int i = 0; i < n; i++){
        if(num[i] <= 0){
            a = 1;
            break;
        }
    }
    printf("a: %d\n", a );
    if(a = 0){
    for(int i = 0; i < n; i++){
            if(num[i] % 2 == 0){
                ans[c] = num[i];
                c++;
            }
        }

        for(int i = 0 ; i < n; i++){
            if( num[i] % 2 != 0){
                ans[c] = num[i];
                c++;
            }
        }
        for(int i = 0; i < n; i++){
            printf("%d ", ans[i]);

        }
    }
    else{
        printf("Invalid Input");
    }
    
    

}