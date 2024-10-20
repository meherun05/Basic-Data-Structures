#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],flag = 0;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] < min){
            min = arr[i];
        }
        
    }
    int ct = 0;
    for(int i = 0; i < n;i++){

        if(arr[i] == min){

            ct++;
        }
    }    
    if(ct % 2 != 0){
        printf("Lucky");
    }else{
        printf("Unlucky");
    }
    return 0;
}