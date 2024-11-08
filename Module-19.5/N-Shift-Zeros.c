#include<stdio.h>

void shiftZero(int x[],int y){
    // if(y > 0){
    //     return;
    // }
    // if()
    shiftZero(x,y-1);
    printf("%d",y);
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    shiftZero(a,n);
    
    return 0;
}