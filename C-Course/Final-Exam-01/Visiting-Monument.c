#include<stdio.h>

void fun(int x){
    for (int i = 1; i <= x; i++)
    {
         printf("%d ",i);
    }
    for (int j = x - 1; j >= 1; j--)
    {
         printf("%d ",j);
    }
    printf("\n");
}

int main(){
    int n,t;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&t);
        fun(t);
    }
    
    return 0;
}