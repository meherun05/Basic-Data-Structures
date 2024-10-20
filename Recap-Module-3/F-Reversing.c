#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j = n;j>= 1; j--){
        printf("%d ",arr[j]);
    }
    return 0;
}