#include<stdio.h>

int main(){
    int n, sum1 = 0, sum0 = 0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            sum1++;
        }
        if(arr[i]== 0){
            sum0++;
        }
    }
        printf("%d ",sum0);
        printf("%d ",sum1);
    
    return 0;
}