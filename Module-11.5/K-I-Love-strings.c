#include<stdio.h>
#include<string.h>

int main(){
    char a[10000];
    char b[10000];
    char temp[10000];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s",a,b);
        temp[i]=a[i];
        a[i] = b[i];
        strcat(temp,b);
    printf("%s %s\n",temp);
    // printf("%s\n",temp);
    }
    
    return 0;
}