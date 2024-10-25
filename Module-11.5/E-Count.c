#include<stdio.h>
#include<string.h>

int main(){
    char s[10000009];
    scanf("%s",s);
    int len = strlen(s);
    long long sum = 0;
    for (int i = 0; i < len; i++)
    {
        s[i] = s[i] - '0';
        sum+=s[i];
    }
       printf("%lld",sum);
    
    return 0;
}