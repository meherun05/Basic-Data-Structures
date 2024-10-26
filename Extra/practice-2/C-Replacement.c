#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
        if(arr[i] > 0){
            arr[i] = 1;
        }else if(arr[i] < 0){
            arr[i] = 2;
        }else{
            arr[i]=0;
        }
        printf("%lld ",arr[i]);
    }
    
    return 0;
}