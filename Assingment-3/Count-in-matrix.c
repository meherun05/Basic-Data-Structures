#include<stdio.h>

int main(){
    int n,m,x;
    scanf("%d %d %d",&n,&m,&x);
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int a;
    int sum_a;
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&a);
        sum_a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a == ar[i][j]){
               sum_a +=1;
               break;
            }
        }
        
    }
        printf("%d\n",sum_a);
    }
    
    return 0;
}