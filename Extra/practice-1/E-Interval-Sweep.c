#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a > 0 && b > 0){
        if((a - b == 1 || b - a == 1 || a == b)){
            printf("YES");
    }else{
        printf("NO");
    }
    }else{
        printf("NO");
    }
    
    return 0;
}