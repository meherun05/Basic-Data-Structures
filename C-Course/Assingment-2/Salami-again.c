#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max_salami = INT_MIN;
    for(int i = 0; i< n; i++){
        if(arr[i] > max_salami){
            max_salami = arr[i];
        }
    } 
    for(int i = 0; i < n; i++){
        if(arr[i] < max_salami){
            arr[i] = max_salami - arr[i];
        }
        if (arr[i] == max_salami){
            arr[i] = 0;
        }
        printf("%d ",arr[i]);
    }
    return 0;
}