#include<stdio.h>
#include<limits.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        printf("%lld ",arr[i]);
    }
    
    
    return 0;
}