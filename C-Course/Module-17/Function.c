#include<stdio.h>

int sumValues(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int result = sumValues(m,n);
    printf("%d",result);
    return 0;
}