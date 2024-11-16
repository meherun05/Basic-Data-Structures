#include<stdio.h>

int main(){
    long long n,x;
    scanf("%lld",&n);
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    scanf("%lld",&x);
    for (int i = 0; i < n; i++)
    {
        if(x == arr[i]){
            printf("%d",i);
            return 0;
        }
    }
        printf("-1");
    
    
    return 0;
}