#include<stdio.h>
#include<string.h>

int main(){
    char a[20] = "Hello";
    char b[29];
    strcpy(b,a);
    int len = strlen(a);

    for (int i = 0, j = len-1; i <= j; i++,j--)
    {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("%s %s",b,a);
    
    return 0;
}