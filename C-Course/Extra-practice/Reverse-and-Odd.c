#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(i % 2 != 0){
            a[i] = a[i];
        }else{
            a[i] = 0;
        }
    }
    for (int i = n-1; i > 0; i--)
    {
        if(a[i] != 0){
            printf("%d ",a[i]);
        }
    }
    
    return 0;
}