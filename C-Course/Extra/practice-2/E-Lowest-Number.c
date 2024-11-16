#include<stdio.h>
#include<limits.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    int min = INT_MAX, min_index ;
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld",&arr[i]);
        if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }
    }
           printf("%d %d",min,min_index);
    
    return 0;
}