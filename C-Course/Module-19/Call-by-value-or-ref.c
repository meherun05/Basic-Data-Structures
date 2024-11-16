#include<stdio.h>

void num(int x, int *y){
    x *= 10;
    *y *= 10;

    printf("%d %d\n",x,*y);
}

int main(){
    int a = 10; int b = 20;
    num(a,&b);
    printf("%d %d",a,b);
    return 0;
}