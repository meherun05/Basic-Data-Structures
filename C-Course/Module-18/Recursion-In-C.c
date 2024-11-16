#include<stdio.h>

int fun(int x, int n){
    if(x > n){
    return 0;
    }
    printf("%d ",x);
    fun(x+1,n);
}

int main(){

    fun(1,5);
    
    return 0;
}