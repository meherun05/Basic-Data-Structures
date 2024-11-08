#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isVowel(char x){
    return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u';
}

int main(){
    char s[2000];
    scanf("%[^\n]s",s);

    int len = strlen(s);
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        s[i] = tolower(s[i]);
        if(isVowel(s[i])){
            count ++;
        }
    }

    printf("%d",count);

    return 0;
}