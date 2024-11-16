#include<stdio.h>
#include<string.h>

int main(){
    char s[1005];
    scanf("%s",s);
    int len = strlen(s);
    int count = 0;
    for (int i = 0,j = len-1; i < len; i++,j--)
    {
        if(s[i] != s[j]){
            // printf("%c %c ",s[i],s[j]);
            printf("%c ",s[j]);
            // break;
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}