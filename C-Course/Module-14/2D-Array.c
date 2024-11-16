#include<stdio.h>

int main(){
    int arr[2][4] = {{1,2,3,6},{4,5,6,7}};
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 4; j++)
       {
      printf("i = %d, j= %d, address = %d || ",i,j,arr[i][j]);
       }
       printf("\n");
    }
    
    return 0;
}