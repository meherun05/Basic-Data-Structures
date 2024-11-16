#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a % 2 == 0){
        printf("Even Number\n");
    }else{
        printf("Odd Number\n");
    }

    if(a > 0){
        printf("Positive Number\n");
    }else if(a < 0){
        printf("Negetive Number\n");
    }
}