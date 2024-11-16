#include<stdio.h>
#include<limits.h>

void minMax(int x[],int y){
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < y; i++)
    {
        if(x[i] > max){
           max = x[i];
        }
        if(x[i] < min){
            min= x[i];
        }
    }
    printf("%d %d",min,max);
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    minMax(a,n);
    
    return 0;
}