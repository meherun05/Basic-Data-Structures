#include<stdio.h>

int main(){
    long long n,t,x;
    scanf("%lld %lld",&n, &t);

    int count= 0,sum=0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld",&x);
        sum+=x;
        if(sum <= t){
            count++;
            // printf("%d %d\n",sum,t);
        }
    }
        printf("%d ",count);
    
    return 0;
}