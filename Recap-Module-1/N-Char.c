#include<stdio.h>

int main(){
    char x;
    int acii;
    scanf("%c",&x);
    if(x >= 'a' && x <= 'z'){
        acii = x - 32;
        printf("%c",acii);
    }else if(x >= 'A' && x <= 'Z'){
        acii = x + 32;
        printf("%c",acii);

    }else{
        printf("");
    }
    return 0;
}