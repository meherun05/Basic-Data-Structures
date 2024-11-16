#include<stdio.h>
#include<limits.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int *x = &a;
    int *y = &b;
    int *z = &c;

    // min value
    if(*x < *y){
        if(*x < *z){
            printf("%d ",*x);
        }else{
            printf("%d ",*z);
        }
    }else{
         if(*y < *z){
            printf("%d ",*y);
        }else{
            printf("%d ",*z);
        }
    }

    //max value
    if(*x > *y){
        if(*x > *z){
            printf("%d",*x);
        }else{
            printf("%d",*z);
        }
    }
    else{
        if(*y > *z){
            printf("%d",*y);
        }else{
            printf("%d",*z);
        }
    }
    return 0;
}