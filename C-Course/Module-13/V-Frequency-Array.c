#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int f[100000] = {0};

    for (int i = 1; i <= n; i++)
    {
        if(arr[i] == arr[i]){
            f[arr[i]] += 1;
        }else{
            f[arr[i]] = 1;
        }
    //     printf("%d %d %d\n",f[i],arr[i],f[arr[i]]);
    }
    for (int i = 1; i <= m; i++)
    {
            printf("%d\n",f[i]);
    }
    
    
    
    return 0;
}