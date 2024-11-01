#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; j++)
        {
        scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; j++)
        {
        printf("%d ",arr[i][j]);
        }
        
    }
    
    return 0;
}