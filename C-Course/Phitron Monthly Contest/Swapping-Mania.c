#include<stdio.h>
#include<string.h>

int main(){
    char str1[1005], str2[1005];
    scanf("%s %s",str1,str2);
    int len = strlen(str1);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        int temp = str1[i];
            if(count == 2){
                break;
            }
        if(str1[i] != str2[i]){
            count++;
            printf("%c",str2[i] -'a');
            // str2[i] = temp;
        }
    }
    
    // printf("%s\n%s",str1,str2);
    return 0;
}