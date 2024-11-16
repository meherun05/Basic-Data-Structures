#include<stdio.h>

void num(int a){
    if(a < 1){
        return 0;
    }
    num(a-1);
    printf("%d ",a);
}

int main(){
    int x;
    scanf("%d",&x);
    num(x);
    return 0;
}