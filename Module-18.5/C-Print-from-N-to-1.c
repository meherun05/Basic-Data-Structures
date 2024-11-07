#include<stdio.h>
 
void num(int a){
    if(a == 1){
        printf("%d",a);
        return ;
    }
    printf("%d ",a);
    num(a-1);
}
 
int main(){
    int x;
    scanf("%d",&x);
    num(x);
    return 0;
}