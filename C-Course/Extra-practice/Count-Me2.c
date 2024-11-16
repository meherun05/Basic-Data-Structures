#include<stdio.h>
#include<string.h>

int main(){
    char str[100005];
    scanf("%s", str);

    long long len = strlen(str);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            continue;;
        }
        count++;
    }
    
    printf("%d",count);
    return 0;
}