#include<stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x ,&y);
    if(x < 3 || y < 3){
        printf("ERROR!");
    }
    else{
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= y; j++){
            if(i % 2 == 1 && j % 2 == 1){
                printf("0");
            }
            else if(i % 2 == 1 && j % 2 == 0){
                printf("X");
            }
            else if(i % 2 == 0 && j % 2 == 1){
                printf("X");
            }
            else if(i % 2 == 0 && j % 2 == 0){
                printf("0");
            }
        }
        printf("\n");
    }
    }
    return 0;
}