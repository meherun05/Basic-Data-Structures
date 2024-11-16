#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
        if(arr[i] <= 10){
           printf("A[%d] = %lld\n",i,arr[i]);
        }
    }
    
    return 0;
}