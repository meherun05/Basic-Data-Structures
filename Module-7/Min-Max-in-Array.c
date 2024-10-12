#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int max = INT_MIN, min = INT_MAX;

    for(int i = 0; i <n;i++){
        if(a[i] >max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    printf("Min value: %d , Max value: %d",min,max);
}