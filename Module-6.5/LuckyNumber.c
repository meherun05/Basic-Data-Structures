#include<stdio.h>

int main(){
    int n,firstDigit,lastDigit;
    scanf("%d",&n);
    firstDigit = n % 10;
    lastDigit= n/ 10;
       
    if(firstDigit % lastDigit == 0 || lastDigit % firstDigit == 0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}