#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int index,value;
    scanf("%d %d",&index,&value);
    n++;
    for(int i = n - 1;i >=index;i--){
        arr[i+1]= arr[i];
    }
    arr[index] = value;
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);

    }
    
    return 0;
}