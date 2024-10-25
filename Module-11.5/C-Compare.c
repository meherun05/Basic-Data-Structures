#include<stdio.h>
#include<string.h>

int main(){
    char a[10001];
    char b[10001];
    scanf("%s",a);
    scanf("%s",b);

    int comCt = strcmp(a,b);

    if( comCt > 0){
        printf("%s",b);
    }else if(comCt < 0){
        printf("%s",a);
    }else{
        printf("%s",b);
    }
    return 0;
}