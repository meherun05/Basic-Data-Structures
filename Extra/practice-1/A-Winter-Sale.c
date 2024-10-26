#include<stdio.h>

int main(){
    // formula for get the orginal price is || discount% = discount / 100 || price = (1-discount)x ||;
    int price,discount;
    scanf("%d %d",&discount,&price);
    float discountRate = (discount/100.0);
    // printf("%.2f",discountRate);
    // printf("\n");
    float x = price / (1-discountRate);
    printf("%.2f",x);
    return 0;
}