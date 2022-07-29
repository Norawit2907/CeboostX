#include<stdio.h>
int main(){
    int a, b ,h, d = 1;
    scanf("%d %d %d", &a, &b, &h);
    int g = h - a, diff = a-b ;
    if(g%diff >= 0){
        d = (g/diff)+1;
    }
    else
        d = g/diff;
    printf("%d", d+1);


    
    
}