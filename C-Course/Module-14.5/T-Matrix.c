#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum = 0, sum_a = 0 ,sum_b = 0 ;
    int firstElement = a[0][0];
    int lastElement = a[n-1][n-1];
    // printf("%d %d ",firstElement,lastElement);
    
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
        if(i == j){
            // printf("%d\n",a[i][j]);
            sum_a += a[i][j];
        }
        if((i+j) == (n -1)){
            // printf("%d\n",a[i][j]);
            sum_b += a[i][j];
        }
       }
    }
    sum = sum_a - sum_b;
    if(sum < 0){
        sum *= -1;
    }
    printf("%d",sum);
    

    return 0;
}

