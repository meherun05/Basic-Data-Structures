#include<stdio.h>

int main(){
    int m,n,x;
    scanf("%d %d",&m,&n);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&x);
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(x == a[i][j]){
                flag = 0;
            }
        }
        
    }
    
    if(flag == 1){
        printf("will take number");
    }else{
        printf("will not take number");
    }
    
    return 0;
}