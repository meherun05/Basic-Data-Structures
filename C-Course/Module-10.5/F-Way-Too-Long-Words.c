#include<stdio.h>
#include<string.h>

int main(){
    char str[10001];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s",str);
        int lenth = strlen(str);
        if(lenth > 10){
        printf("%c",str[0]);
        printf("%d",lenth-2);
        printf("%c\n",str[strlen(str)-1]);
        }else{
            printf("%s\n",str);
        }
        
    }
    return 0;
}