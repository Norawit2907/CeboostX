#include<stdio.h>
int a[10000];

int main(){
    int n = 10, c=0;
   // scanf("%d", &n);
    for(int i = 0; i < n;i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        if(i == 0)
            continue;
        else if(i == n - 1)
            continue;
        else if(a[i] > a[i+1]){
            c++;
           // printf(": %d %d\n",a[i], a[i+1]);
        }
    }
    printf("%d", c);
}