#include<stdio.h>
#include<string.h>

int main(){
    char str[200] = "Hello, world! I am learning C programming language. ^_^\nProgramming is fun and challenging. /\\/\\/\\\nI want to give my 100%% dedication to learn!    I will succeed one day.";
    
   int len = strlen(str);
   for (int i = 0; i < len; i++)
   {
    if(str[i] == '\t'){
        str[i] = '';
    }
   }
   printf("%s",str);
   
    return 0;
}