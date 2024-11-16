#include<stdio.h>

int main(){
    char a,b;
    scanf("%c",&a);
    if(a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z'){
        b = a + 1;
        if(a == 'z'){
            b = 'a';
        }else if(a == 'Z'){
            b = 'A';
        }
        printf("%c",b);
    }
    return 0;
}