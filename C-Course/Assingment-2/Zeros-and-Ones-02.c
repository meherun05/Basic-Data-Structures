#include<stdio.h>

int main(){
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);

    for (int i = 1; i <= n; i++)
    {
        if(x == i){
            if(arr[i] == 0){
            arr[i] = 1;
            }else if(arr[i] == 1){
                arr[i]= 0;
            }
        }
        printf("%d ",arr[i]);
    }
    
    return 0;
}