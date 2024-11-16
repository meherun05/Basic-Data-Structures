#include<stdio.h>
#include<stdbool.h>
int main(){
    int a = 15, b= 10, c=3;
    // bool flag = a >= b;
    // printf("flag = %d",flag);
    bool result = a > b && b > c;
    printf("%d",result);
    return 0;
}