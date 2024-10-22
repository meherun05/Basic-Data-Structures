#include<stdio.h>
#include<string.h>

int main(){
    char str[100000];
    scanf("%s",str);
    int lenth = strlen(str);
    for (int i = 0; i < lenth; i++)
    {
        char c = ',';
        char s = ' ';
        if(str[i] == c){
            str[i] = ' ';
        }
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    
    printf("%s",str);
    return 0;
}
