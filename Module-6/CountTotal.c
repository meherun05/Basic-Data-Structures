#include<stdio.h>

int main(){
    int n;
    int evenCount = 0;
    int oddCount = 0;
    int positiveCount = 0;
    int negativeCount = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int x;
        
        scanf("%d",&x);
        if(x % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
        if(x > 0){
            positiveCount++;
        }else if(x < 0){
            negativeCount++;
        }
    }
    printf("Even: %d\n",evenCount);
    printf("Odd: %d\n",oddCount);
    printf("Positive: %d\n",positiveCount);
    printf("Negative: %d\n",negativeCount);
}