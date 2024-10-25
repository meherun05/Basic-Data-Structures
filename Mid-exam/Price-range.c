#include<stdio.h>

int main(){
    long long n,x,y,z;
    scanf("%lld %lld %lld",&n,&x,&y);

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld",&z);
        if(z >= x && z <= y){
            
        //    printf("%lld ",z);
           count++;
        }
    }
            // printf("\n");
           printf("%d ",count);
    
    return 0;
}