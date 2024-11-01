#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *arr = (int *)malloc(1 * sizeof(int));

    for (int i = 0; i < 1; i++)
    {
        arr[i] = i + 1;
    }
    int *temp = arr;
    scanf("%d",&n);

    arr = (int *)realloc(arr, n * sizeof(int));
    if (arr == NULL)
    {
        arr = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
       printf("%d ",arr[i]);
    }
    
    free(arr);
    
    return 0;
}