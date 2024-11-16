#include<stdio.h>

int main(){
    long long n;
    int isShoesBuy = 0;
    scanf("%lld",&n);
    if(n > 1000){
        printf("I will buy Punjabi\n");

        if((n - 1000) >= 500){
            printf("I will buy new shoes\n");
            isShoesBuy = 1;
        }
        if(isShoesBuy == 1){
        printf("Alisa will buy new shoes");
        }
    }else{
        printf("Bad luck!");
    }
    return 0;
}