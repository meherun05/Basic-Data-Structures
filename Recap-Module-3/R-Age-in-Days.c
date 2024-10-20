#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int years = n-365;
    int month = n / 12;
    int days = years - n;
    
    return 0;
}