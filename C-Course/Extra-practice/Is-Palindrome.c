#include<stdio.h>
#include<string.h>

int IsPalindrome(char s[]){
    int len = strlen(s);
    int flag = 1;
    for (int i = 0, j = len-1; i < len; i++,j--)
    {
        if(s[i] != s[j]){
            flag = 0;
        }
    }
    return flag;
    
}

int main(){
    char str[1005];
    scanf("%s",str);
    int flag = IsPalindrome(str);
    if(flag == 1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}