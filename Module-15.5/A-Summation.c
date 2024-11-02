#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 5;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i] =i + 1;
        // printf("%d ",arr[i]);
    }
    int *temp = arr;
    scanf("%d",&n);
    arr = (int *)realloc(arr, n * sizeof(int));
    if(arr == NULL){
        arr = temp;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum +=arr[i];
        // printf("%d ",arr[i]);
    }
    if(sum < 0){
        sum *=-1;
    }
    printf("%d ",sum);
    
    free(arr);

    return 0;
}