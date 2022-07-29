#include<stdio.h>

int main(){
    // 13.30 1330 30
    int h, m, c = 0;
    scanf("%d.%d",&h ,&m);
   // printf("%d %d\n", h, m);
    if(h > 24 || h <= 0 || m >= 60){
        printf("ERROR!");
    }
    else{
    
    if( h == 24){
        h -= 12;
        c = 0;
    }
    else if(h > 12){
        h -= 12;
        c = 1;
    }
    else if( h == 12){
        c = 1;
    }
    
    if(h <= 9){
        printf("0");
    }
    printf("%d.",h);
    if(m < 10){
        printf("0");
    }
    printf("%d ",m);
    
    if(c == 0){
        printf("AM");
    }
    else if(c == 1){
        printf("PM");
    }
    
    }
    return 0;
    
}