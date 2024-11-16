#include<stdio.h>

int fun(int x[], int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d ",x[i]);
    }
    
}

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    fun(a,5);
    return 0;
}