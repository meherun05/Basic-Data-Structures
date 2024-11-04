#include<stdio.h>

void num(int a){
    
    if(a < 1){
        return 0;
    }
    printf("I love Recursion\n");
    num(a-1);
}
int main(){
    int x;
    scanf("%d",&x);
    num(x);
    return 0;
}