#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <=n; i++){
        printf("Multiplication Table of %2d\n",i);
    for(int j = 1; j <= 10; j++){
        printf("%2d  x %2d = %3d\n",j,i,j*i);
    }
    printf("\n\n");
    }
}