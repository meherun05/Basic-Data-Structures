#include<stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            if(i == j){
                if(a[i][j] != 1){
                    flag = 0;
                }
            }else if((i + j) == (n-1)){
                if(a[i][j] != 1){
                    flag = 0;
                }
            }
            else{
                if(a[i][j] != 0){
                    flag = 0;
                }
            }
        }
    }

    if(flag == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}