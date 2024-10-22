#include<stdio.h>
#include<string.h>

int main(){
    char str[10001];
    scanf("%s",str);
    int lenght_str = strlen(str);
    int flag = 1;
    for(int i = 0, j= lenght_str -1; i < j; i++ , j--){
       if(str[i] != str[j]){
        flag = 0;
        break;
       }
    }
    if(flag == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0 ;
}