#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    n = 32 - n;
    int ans = 0;
    printf("%d",pow(2, n) - 2);
}