#include<stdio.h>
#include<math.h>

int main(){
    int q,a,b,range;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&b);
        int times = 0;
        if(a!=b){
            range = a-b;
            if(range<0) range *= -1;
            if(range > 10){
                times += range/10;
                if(times%10!=0){
                    times++;
                }
                printf("%d\n",times);
            }
            else{
            printf("1\n");
        }
        }
        else{
            printf("0\n");
        }
        
    }
}
