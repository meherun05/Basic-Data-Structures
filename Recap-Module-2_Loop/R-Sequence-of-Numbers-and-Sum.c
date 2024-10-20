#include<stdio.h>

int main(){
    int m,n;
    while(scanf("%d %d",&m, &n)){
        int sum = 0;
        if(m <= 0 ||  n <= 0){
            break;
        }else{
            if(m < n){
                for(int i = m; i <=n;i++){
                    sum+=i;
                    printf("%d ",i);
                }
                
                printf("sum =%d\n",sum);
            }
            else if(m > n){
                for (int i = n; i <= m; i++)
                {
                    sum+=i;
                    printf("%d ",i);
                }
                printf("sum =%d\n",sum);
            }
        }
    }
    
    return 0;
}