#include<stdio.h>

int main(){
    int i;
    scanf("%d",&i);
//    for(int j = 0; j < i; j++){
//      int n;
//     scanf("%d",&n);
//     if(n == 0){
    //     printf("0");
    // }
    while(i > 0){
        int digit = i % 10;
        printf("%d ",digit);
        i /= 10;
    }
    printf("\n");
    // printf("%d\n",i);
//    }
}