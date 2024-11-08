#include<stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&n,&m);
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int firstElement = a[0][0];
    int lastElement = a[n-1][m-1];
    int temp = firstElement;
    firstElement = lastElement;
    lastElement = temp;
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            int firstElement = a[i][0];
            int lastElement = a[n-1][m-j];
            int temp = firstElement;
            printf("%d ",lastElement);
            if(a[i][j] == firstElement){
                a[i][j] = lastElement;
            }
            if(a[i][j] == lastElement){
                a[i][j] = temp;
            }
            // printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    // for (int i = n-1; i >= 0; i--)
    // {
    //     for (int  j = m-1; j >= 0; j--)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}