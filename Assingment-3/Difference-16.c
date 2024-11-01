#include<stdio.h>

int main(){
    int a ,b;
    int *x = &a;
    int *y = &b;
    scanf("%d %d",&a,&b);
    int count = *x - *y;
   
        if(count < 0 ){
            count *= -1;
        }
        printf("%d",count);
    
    return 0;
}