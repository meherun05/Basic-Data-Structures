#include<stdio.h>
#include<string.h>

int main(){
    char ch[10000] = "apple";
    int len = strlen(ch);
    int f[27] = {0};
    for (int i = 0; i < len; i++)
    {
        char c = ch[i];
        int index = c - 'a';
        f[index] = 1;
    }
    for (int i = 0; i < 27; i++)
    {
        printf("%c=%d ,",i+'a',f[i]);
    }
    
    
    return 0;
}