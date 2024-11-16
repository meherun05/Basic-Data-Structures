#include<stdio.h>
#include<string.h>

void fun(char *x){
    int len = strlen(x);
    int countS = 0,countC = 0,countN = 0;
    for (int i = 0; i < len; i++)
    {
        if(x[i] >= 'a' && x[i] <= 'z'){
            countS++;
        }else if(x[i] >= 'A' && x[i] <= 'Z'){
            countC++;
        }else{
            countN++;
        }
    }
    printf("%d %d %d\n",countC,countS,countN);
}

int main(){
    int n;
    scanf("%d",&n);
    char s[10005];

    for (int i = 0; i < n; i++)
    {
       scanf("%s",s);
       fun(s);
    }

    
    
    return 0;
}