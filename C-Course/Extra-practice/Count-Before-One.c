#include<stdio.h>

int count_before_one(int x[],int y){
    int z =0;
   for (int i = 0; i < y; i++)
   {
    if( x[i] == 1){
        break;
    }
    z++;
   }
   
    return z;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }

    int count = count_before_one(a,n);
    printf("%d",count);
    
    return 0;
}