#include<stdio.h>
#include<string.h>

int main(){
    char a[20] = "HelloWorld";
    char b[20] = "Hello";
    
    int comapreStr = strcmp(a,b); // this will return 0 when both are same, -value when a is less the b and +value when a is gather then b

    printf("%d",comapreStr);
    return 0;
}