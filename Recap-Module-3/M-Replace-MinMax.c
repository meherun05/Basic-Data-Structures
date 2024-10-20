#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
        int min= INT_MAX, max = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);
         if(arr[i] > max){
                max = arr[i];
            }
            if(arr[i] < min){
                min = arr[i];
            }
    }
        int temp = max;
    for(int i = 1; i <= n; i++){
        if(arr[i] == max){
            arr[i]= min;
        }
        else if(arr[i]== min){
            arr[i]=temp;
        }
        printf("%d ",arr[i]);
    }
    
    return 0;
}