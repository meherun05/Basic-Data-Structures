#include<stdio.h>

int maxNum(int a[], int y){
    if(y == 1){
        return a[0];
    }
    int max;
    int maxN = maxNum(a + 1, y-1);
    if(a[0] > maxN){
        max = a[0];
    }else{
        max = maxN;
    }
    //    printf("%d\n",maxN);

    return max;
    
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
        int max = maxNum(a,n);
        printf("%d",max);
    return 0;
}

