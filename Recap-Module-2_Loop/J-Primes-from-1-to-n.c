#include<stdio.h>

int main(){
    int n,flag,num;
    scanf("%d",&n);
    for(num = 2; num <= n;num++){
        flag  =0;
    for (int i = 2; i <= num/2; i++)
    {
        if(num % i == 0){
            flag++;
        }
    }
    if(flag == 0){
        printf("%d ",num);
    }
    }
    
    return 0;
}