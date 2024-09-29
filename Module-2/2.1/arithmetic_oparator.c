#include<stdio.h>
#include<math.h>

int main(){
    long long a, b;
   scanf("%lld %lld", &a, &b); 
    int result = a + b;
    int result2 = a - b;
    int result3 = a * b;
    int result4 = a /b;
    int result5 = a % b;
   printf("%d\n %d\n %d\n %d\n %d\n",result,result2,result3,result4,result5); 
long long result = a * b;
printf("%lld", result);
    return 0 ;
}