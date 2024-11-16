#include<stdio.h>

int main(){
    char n;
    scanf("%c",&n);
    char arr[]={'a','e','i','o','u'};
    int isVowels = -1;
    for(int i = 0; i <5;i++){
        if(n == arr[i]){
        isVowels = 1;
        }
    }
    if(isVowels == 1){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    return 0;
}