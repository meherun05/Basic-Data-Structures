#include<stdio.h>

int main(){
    int n ;
    scanf("%d",&n);
    long long arr[n];
    long long b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
        b[i] = arr[i];
    }
    int flag = 1;
    for (int i = 0, j= n-1; i < j; i++,j--)
    {
    //    printf("%d ",arr[i]);
    //    printf("%d ",b[j]);
    if(arr[i] != b[j]){
        flag = 0;
        break;
    }
    }
    // printf("%d ",flag);
    if(flag == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    

    return 0;
}