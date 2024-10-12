#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    int palindrome= 1;

    for(int i =0; i < n/2; i++){
        if(arr[i] != arr[n-1-i]){
            palindrome = 0;
            break;
        }
    }
    if(palindrome == 1){
        printf("YES");
    }else{
    printf("NO");
    }
    
    return 0;
}
