#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int j = 1; j<=n;j++){
        for(int i = 1;i<=10;i++){
        printf("%2d x %2d = %3d\n",i,j,i*j);
    }
    printf("\n");
    }
}