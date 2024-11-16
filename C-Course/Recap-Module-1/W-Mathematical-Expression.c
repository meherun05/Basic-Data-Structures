#include<stdio.h>

int main(){
    int a,b,c;
    char s,q;
    scanf("%d %c %d %c %d",&a,&s,&b,&q,&c);
    if(s == '+' && q == '='){
        int sum = a+b;
        if(a + b == c){
            printf("Yes");
        }else{
            printf("%d", sum);
        }
    }else if(s == '-' && q== '='){
        int minus = a-b;
       if(a - b == c){
            printf("Yes");
        }else{
            printf("%d", minus);
        }
    }else if(s == '*' && q == '='){
        int multi = a*b;
       if(a * b == c){
            printf("Yes");
        }else{
            printf("%d", multi);
        }
    }
    return 0;
}