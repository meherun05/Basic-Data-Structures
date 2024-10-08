#include<stdio.h>

int main(){
    char currentAlpha,nextAlpha;
    scanf("%c",&currentAlpha);
    if((currentAlpha >='A' && currentAlpha <='Z') || (currentAlpha >= 'a' && currentAlpha <= 'z')){
        nextAlpha = currentAlpha + 1;
        if(currentAlpha == 'z'){
            nextAlpha = 'a';
        }else if(currentAlpha == 'Z'){
            nextAlpha = 'A';
        }
        printf("Current Alpha: %c\n",currentAlpha);
        printf("Next Alpha: %c\n",nextAlpha);
    }
}