#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n,sum;
    scanf("%d",&n);
    while(n > 0){
        int a = n % 10;
        sum = a + sum;
         n/=10;
    }
        printf("%d",sum);
}