#include<stdio.h>

int sum(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a + b;
    return sum;
}
int main(){
    int result = sum();
    printf("%d",result);
    return 0;
}