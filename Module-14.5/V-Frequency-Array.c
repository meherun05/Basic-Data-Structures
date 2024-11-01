#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&a[i]);
    }
    int f[100000]={0};

    for (int i = 1; i <= n; i++)
    {
        if(a[i] == a[i]){
            f[a[i]] +=1;
        }else{
            f[a[i]] = 1;
        }
         printf("%d\n",f[i]);
    }
    
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n",f[i]);
    }
    
    
    return 0;
}