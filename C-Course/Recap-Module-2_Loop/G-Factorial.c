#include<stdio.h>

int main(){
    long long n,t;
    scanf("%lld",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lld",&n);
        long long fact = 1;
        for(int j = 1; j <= n; j++){
            fact *= j;
        }
            printf("%lld\n",fact);
    }
    return 0;
}