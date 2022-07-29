#include<stdio.h>
#include<string.h>

char a[100010];
int main(){
    scanf("%[^\n]s", &a);
    int n = strlen(a);
    n-= 1;
    for(int i = n; i>=0;i--){
        printf("%c",a[i]);
    }
    //printf("%s", n);
}