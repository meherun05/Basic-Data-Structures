#include<stdio.h>

void printDigits(int x){
    if(x == 0){
        return;
    }
    int digits = x % 10;
    printDigits(x / 10);
    printf("%d ",digits);
}
int main(){
    int n;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d",&t);

        if(t == 0) printf("0");
        printDigits(t);
        printf("\n");
    }
    

    return 0;
}