#include<stdio.h>
#include<string.h>

int main(){
    char s[1000001];
    scanf("%s",s);
    // printf("%s",s);
    int len = strlen(s);
    int f[27] ={0};
    for (int i = 0; i < len; ++i)
    {
        char c = s[i];
        int index = c - 'a';
        if(index == index){
            f[index] +=1;
        }else{
            f[index] = 1;
        }
        // printf("%c : %d\n",c,count);
       
    }
    for (int i = 0; i < 27; i++)
    {
        if(f[i] != 0){
        printf("%c : %d\n",i+'a',f[i]);
        }
    }
    
    
    
    return 0;
}