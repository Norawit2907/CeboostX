#include<stdio.h>
#include<string.h>
char a[1000];

int main(){
    scanf(" %s", a);
    int n = strlen(a);
    for(int i = 0; i < n; i++){
        printf("%c ",a[i]);
    }
    return 0;
}