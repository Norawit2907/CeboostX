#include<stdio.h>
#include<math.h>
int main() {
    int a, b, x, y;
    scanf("%d %d %d %d", &a ,&b, &x ,&y);
    int xdiff = x-a, ydiff = y-b;
    
    if(xdiff <= 0)
        xdiff = -xdiff;
    if(ydiff <= 0)
        ydiff = -ydiff;
     //printf("%d\n",xdiff);
     //printf("%d\n",ydiff);
    int sum = 0;
    while(xdiff != 0 && ydiff != 0){
        sum++;
        xdiff--;
        ydiff--;
    }
    if(xdiff != 0)
        sum += xdiff;
    if(ydiff != 0)
        sum += ydiff;
    printf("%d",sum);

    
 return 0;
}