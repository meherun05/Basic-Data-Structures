#include<stdio.h>
#include<string.h>

int main(){
    char str[10005];
    scanf("%s",str);

    int len = strlen(str);
    int count = 0;
    int f[26] = {0};
    for (int i = 0; i < len; i++)
    {
        char c = str[i];
        int index = c - 'a';
        if(str[i] == str[i]){
            f[index] +=1;
        }else{
            f[index] = 1;
        }
        }

    for (int i = 0; i < 26; i++)
    {
        if(f[i] != 0){
            printf("%c - %d\n",i+'a',f[i]);
        }
    }
    
    
    return 0;
}